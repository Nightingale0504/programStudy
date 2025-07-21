using Hacknet;
using Microsoft.Xna.Framework;
using Microsoft.Xna.Framework.Graphics;
using Pathfinder.Util;
using System;
using System.Linq;
using Color = Microsoft.Xna.Framework.Color;
using Rectangle = Microsoft.Xna.Framework.Rectangle;

public class eOSinjectorExe : Pathfinder.Executable.BaseExecutable
{
    public enum eOSState { Intro, MainIntro, MainBody, Ending }

    private const float INTRO_TIME = 3f;
    private const float MAIN_INTRO_TIME = 3f;
    // 缩短主滚动阶段时长以加快文字流动
    private const float MAIN_BODY_TIME = 3f;
    private const float ENDING_TIME = 1.2f;

    private int eOSPort;
    private string[] bodyText;

    private Color flashColor;
    private Color brightDrawColor;

    private float initStringCharDelay = 0.1f;
    private float currentStateTimer;
    private float timeTaken;

    private eOSState state;

    public const string initText =
        "Initializing###.#.#.#\n" +
        "Connecting###.#.#.#.#.#.#.#.#..#.\n" +
        "Injecting Corrupt Sectors###.#.#.##.#.#.#";

    public const string mainIntroText =
        "eOS Vulnerability DETECED\n" +
        "##Initializing eOS Core Dump##>#>##>#>#>#>>>>>";

    public const string errorIntroText =
        "e05^ Vu$$r$$ty CO3@PI\"} DGT^C.D\n" +
        "##Ini$$!l^zi/g eO: -!re 3@Hp##>#>##>#>#>#>>>>>";

    public eOSinjectorExe(Rectangle location, OS operationSystem, string[] args)
        : base(location, operationSystem, args)
    {
        name = "eOSVulnerabilityCorrupter";
        IdentifierName = "eOS Vulnerability Corruption Injector";
        ramCost = 350;
    }

    public override void LoadContent()
    {
        Computer c = ComputerLookup.FindByIp(targetIP);
        eOSPort = c.GetDisplayPortNumberFromCodePort(3659);

        // 防止多实例
        foreach (var exe in os.exes)
        {
            if (exe is eOSinjectorExe)
            {
                needsRemoval = true;
                os.terminal.writeLine("[ERROR] Only one eOSinjector.exe can be opened at a time!");
                return;
            }
        }

        // 参数校验
        if (Args.Length < 2
            || !Int32.TryParse(Args[1], out int port)
            || port != eOSPort)
        {
            os.write("Target Port is Closed or missing");
            os.write("Execution failed");
            needsRemoval = true;
            return;
        }

        base.LoadContent();

        // 计算每字符延迟
        initStringCharDelay = INTRO_TIME / initText.Replace("#", "@@").Length;

        // 构造滚动文字：三段文字合并并重复3次，大幅增加内容量
        var segment = initText + "\n\n" + mainIntroText + "\n\n" + errorIntroText;
        var fullText = string.Join("\n", Enumerable.Repeat(segment, 3));
        bodyText = fullText
            .Replace("#", string.Empty)
            .Split(new[] { '\n' }, StringSplitOptions.RemoveEmptyEntries);

        // 文字闪烁颜色初始化
        flashColor = os.lockedColor; flashColor.A = 0;
        brightDrawColor = os.unlockedColor; brightDrawColor.A = 0;

        Programs.getComputer(os, targetIP).hostileActionTaken();
    }

    public override void Update(float t)
    {
        base.Update(t);
        timeTaken += t;
        currentStateTimer += t;

        var previous = state;
        UpdateState();
        if (state != previous)
            currentStateTimer = 0f;
    }

    private void UpdateState()
    {
        if (timeTaken < INTRO_TIME) state = eOSState.Intro;
        else if (timeTaken < INTRO_TIME + MAIN_INTRO_TIME) state = eOSState.MainIntro;
        else if (timeTaken < INTRO_TIME + MAIN_INTRO_TIME + MAIN_BODY_TIME) state = eOSState.MainBody;
        else if (timeTaken < INTRO_TIME + MAIN_INTRO_TIME + MAIN_BODY_TIME + ENDING_TIME)
            state = eOSState.Ending;
        else if (!isExiting)
        {
            Completed();
            isExiting = true;
        }
    }

    public override void Draw(float t)
    {
        base.Draw(t);
        drawOutline();
        drawTarget("app:");

        Rectangle dest = bounds;
        dest.Inflate(-2, -(PANEL_HEIGHT + 1));
        dest.Y += PANEL_HEIGHT;

        drawBackground(dest);

        switch (state)
        {
            case eOSState.Intro: DrawIntro(dest); break;
            case eOSState.MainIntro: DrawMainIntro(dest); break;
            case eOSState.MainBody: DrawMainBody(dest); break;
            case eOSState.Ending: DrawEnding(dest); break;
        }
    }

    private void drawBackground(Rectangle dest)
    {
        spriteBatch.Draw(Utils.gradient, dest, os.highlightColor * 0.2f);
    }

    private void DrawIntro(Rectangle dest)
    {
        var text = getDelayDrawString(initText, currentStateTimer);
        spriteBatch.DrawString(GuiData.detailfont, text, new Vector2(dest.X + 2, dest.Y + 2), Color.White);
    }

    private void DrawMainIntro(Rectangle dest)
    {
        if (currentStateTimer < 0.8f)
        {
            if (currentStateTimer % 0.2f < 0.07f)
                PatternDrawer.draw(dest, 3f, os.darkBackgroundColor * 0.2f, os.lockedColor, spriteBatch, PatternDrawer.binaryTile);
            else
                spriteBatch.DrawString(
                    GuiData.detailfont,
                    errorIntroText.Replace("#", string.Empty),
                    new Vector2(dest.X + 2, dest.Y + 2),
                    Color.White
                );
        }
        else
        {
            var text = getDelayDrawString(mainIntroText, currentStateTimer - 0.8f);
            spriteBatch.DrawString(GuiData.detailfont, text, new Vector2(dest.X + 2, dest.Y + 2), Color.White);
        }
    }

    private void DrawMainBody(Rectangle dest)
    {
        // 标题
        spriteBatch.DrawString(
            GuiData.detailfont,
            mainIntroText.Replace("#", string.Empty),
            new Vector2(dest.X + 2, dest.Y + 2),
            Color.White * fade
        );

        // 滚动正文
        int count = (int)(currentStateTimer / MAIN_BODY_TIME * bodyText.Length);
        Vector2 pos = new Vector2(dest.X + 2, dest.Y + 30);
        foreach (var line in bodyText.Take(count))
        {
            spriteBatch.DrawString(
                GuiData.detailfont,
                line,
                pos,
                Color.White,
                0f, Vector2.Zero, 0.5f, SpriteEffects.None, 0.3f
            );
            pos.Y += 12;
        }
    }

    private void DrawEnding(Rectangle dest)
    {
        int bannerH = dest.Height / 3;
        // 横幅居中：Y = dest.Y + (dest.Height - bannerH)/2
        int bannerY = dest.Y + (dest.Height - bannerH) / 2;

        spriteBatch.Draw(
            Utils.white,
            new Rectangle(dest.X, bannerY, dest.Width, bannerH),
            os.unlockedColor * 0.8f
        );

        var inner = new Rectangle(dest.X, bannerY + 3, dest.Width, bannerH - 6);
        spriteBatch.Draw(Utils.white, inner, os.indentBackgroundColor * 0.8f);

        string text = "UNLOCKED";
        Vector2 size = GuiData.font.MeasureString(text);
        Vector2 pos = new Vector2(
            inner.X + (inner.Width - size.X) / 2,
            inner.Y + (inner.Height - size.Y) / 2
        );

        spriteBatch.DrawString(GuiData.font, text, pos - Vector2.One, brightDrawColor * fade);
        spriteBatch.DrawString(GuiData.font, text, pos + Vector2.One, brightDrawColor * fade);
        spriteBatch.DrawString(GuiData.font, text, pos, Color.White * fade);
    }

    private string getDelayDrawString(string original, float timeSec)
    {
        string result = string.Empty;
        float cumulative = 0f;

        foreach (char c in original)
        {
            cumulative += initStringCharDelay;
            if (c == '#') cumulative += initStringCharDelay;
            if (timeSec >= cumulative && c != '#')
                result += c;
        }

        return result;
    }

    public override void Completed()
    {
        base.Completed();
        Programs.getComputer(os, targetIP)
                ?.openPort(eOSPort, os.thisComputer.ip);
    }
}
