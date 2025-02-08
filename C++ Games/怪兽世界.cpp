#include<cmath>
#include<time.h>
#include<cstdio>
#include<iostream>
#include<cstring>
#include<windows.h>
#include<conio.h>
#include<string>
#include<cstdlib>
using namespace std;
int where,x,y;
void print(string a){
    for (int i=0;i<=a.length();++i){
        cout<<a[i];
        Sleep(20);
    }
    Sleep(500);
    return;
}
char qwe;
string mapname[5]={"【中部主城】","【森林】","【森林深处】","【沙漠】","【魔王老巢】"};
string maps[5][20]= {{{"####################"},// 0
                      {"#武#   #           #"},// 1
                      {"#器|   # *         #"},// 2
                      {"#店#   # |         #"},// 3
                      {"####   #           #"},// 4
                      {"#防#   # *         #"},// 5
                      {"#具|   # |        =="},// 6
                      {"#店#   #           @"},// 7
                      {"####   # *        =="},// 8
                      {"#道#   # |         #"},// 9
                      {"#具|   #           #"},// 0
                      {"#店#   # *         #"},// 1
                      {"####   # |         #"},// 2
                      {"#      #           #"},// 3
                      {"#      #           #"},// 4
                      {"#      #           #"},// 5
                      {"#      ####| |######"},// 6
                      {"#               |简#"},// 7
                      {"#               |困#"},// 8
                      {"####################"}},// 9
                     {{" |#######_#####|=O=|"},// 0
                      {"| ##    AAA     VUV#"},// 1
                      {" |###  |=O=|  _  U #"},// 2
                      {" |# ##  VUV  AAA U #"},// 3
                      {" |#  ##  _  |=O=|  #"},// 4
                      {"| #  ## ABA  VUV   #"},// 5
                      {"===  ##|=K=|  U    #"},// 6
                      {"@    ## VUV _ U _  #"},// 7
                      {"===  ##  U AAA AAA #"},// 8
                      {" |#  ##  O|=O=|=O=|#"},// 9
                      {"| #  ##    VUV VUV #"},// 0
                      {" |#  ##     U   U  #"},// 1
                      {" |#  ##     U   U  #"},// 2
                      {"| #  ###           #"},// 3
                      {" |#       _        #"},// 4
                      {"| #  ### AAA       #"},// 5
                      {"| # ##  |=O=|      #"},// 6
                      {" |###    VUV       #"},// 7
                      {" |##      U    U U #"},// 8
                      {"| ########U####U U##"}},// 9
                     {{"###_###########U@U##"},// 0
                      {"# AAA          U U #"},// 1
                      {"#|=O=|             #"},// 2
                      {"# VUV              #"},// 3
                      {"#  U               #"},// 4
                      {"#  U               #"},// 5
                      {"##                 #"},// 6
                      {"         E===D     #"},// 7
                      {"##       N   V     #"},// 8
                      {"#  _     N         #"},// 9
                      {"# AAA    N   A     #"},// 0
                      {"#|=O=|   E===D     #"},// 1
                      {"# VUV  _           #"},// 2
                      {"#  U  AAA _    _   #"},// 3
                      {"# _U |=O=AAA  AAA  #"},// 4
                      {"#AAA  VU|=O=||=O=| #"},// 5
                      {"|=O=|  U VUV  VUV  #"},// 6
                      {"#VUV   U  U    U   #"},// 7
                      {"# U       U    U   #"},// 8
                      {"##U#################"}},// 9
                     {{"##############Z#####"},// 0
                      {"# |O #       ZZ    #"},// 1
                      {"# #大#       ZZZ   #"},// 2
                      {"# ####       ZZZZ  #"},// 3
                      {"#           ZZZZZ  #"},// 4
                      {"#    Z             #"},// 5
                      {"#   ZZ            ##"},// 6
                      {"#  ZZZ             @"},// 7
                      {"#  ZZZZ     Z     ##"},// 8
                      {"#  ZZZZZ    ZZ     #"},// 9
                      {"##         ZZZ     #"},// 0
                      {"          ZZZZ     #"},// 1
                      {"##        ZZZZZ    #"},// 2
                      {"#   Z              #"},// 3
                      {"#  ZZ              #"},// 4
                      {"#  ZZZ             #"},// 5
                      {"#  ZZZZ         ####"},// 6
                      {"# ZZZZZ         |简#"},// 7
                      {"#               |困#"},// 8
                      {"####################"}},// 9
                     {{"####################"},// 0
                      {"#      #     #     #"},// 1
                      {"# ####### #######  #"},// 2
                      {"#               # ##"},// 3
                      {"# ### #### ####    #"},// 4
                      {"# # # #    #  #### #"},// 5
                      {"### # ## ###     # #"},// 6
                      {"#                # #"},// 7
                      {"# ### # ## #    ## #"},// 8
                      {"### # #    ###  #  #"},// 9
                      {"K   # ## ###    # ##"},// 0
                      {"# ###  # #   ####  @"},// 1
                      {"#        #      ####"},// 2
                      {"#####  ##### ####  #"},// 3
                      {"#   #        #     #"},// 4
                      {"# #########  ##### #"},// 5
                      {"#   #  #        #  #"},// 6
                      {"### #  #####  ### ##"},// 7
                      {"#                  #"},// 8
                      {"####################"}}};//9

struct PlayerDec{
    string name;
    int HP,MAXHP;
    int LV,EXP,MAXEXP;
    int ATK,DEF;
    int Money;
    int q1,q2,q3,q4,q5;
    int s1,s2,s3,s4,s5;
    int d1,d2,d3,d4,d5;
    int k1,k2,k3,k4,k5,k6,k7,k8,k9;
};
PlayerDec Player;
void shop1(){
    system("cls");
    print("武器店老板：这位少侠，我看你力大如牛，来买一把好武器吧！");
    system("cls");
    print("1.生铁长剑····················200金币");printf("\n");
    print("2.精钢长刀····················500金币");printf("\n");
    print("3.劈山斧·····················800金币");printf("\n");
    print("4.夺魂重枪····················1000金币");printf("\n");
    print("5.石中神剑····················2000金币");printf("\n");
    qwe=_getch();
    switch (qwe){
        case '1':if (Player.Money>=200)Player.s1++,Player.Money-=200;else cout<<"这位客官，您的钱不够！我脾气很好的！";break;
        case '2':if (Player.Money>=500)Player.s2++,Player.Money-=500;else cout<<"这位客官，您的钱不够！我脾气很好的！";break;
        case '3':if (Player.Money>=800)Player.s3++,Player.Money-=800;else cout<<"这位客官，您的钱不够！我脾气很好的！";break;
        case '4':if (Player.Money>=1000)Player.s4++,Player.Money-=1000;else cout<<"这位客官，您的钱不够！我脾气很好的！";break;
        case '5':if (Player.Money>=2000)Player.s5++,Player.Money-=2000;else cout<<"这位客官，您的钱不够！我脾气很好的！";break;
    }
    print("拜拜~~~~~~~~~~~~~~~");
    system("cls");
    return;
}
void shop2(){
    system("cls");
    print("防具店老板：这位仁兄，你这么弱不禁风，小心给野兽打死了，我这的防具世界第一，看看？");
    system("cls");
    print("1.护心镜····················100金币");printf("\n");
    print("2.铁锁甲····················200金币");printf("\n");
    print("3.陨铁神盾···················500金币");printf("\n");
    print("4.坦克皮····················1250金币");printf("\n");
    print("5.风王结界···················1750金币");printf("\n");
    qwe=_getch();
    switch (qwe){
        case '1':if (Player.Money>=100)Player.d1++,Player.Money-=100;else cout<<"这位客官，您的钱不够！来人啊！轰出去！";break;
        case '2':if (Player.Money>=200)Player.d2++,Player.Money-=200;else cout<<"这位客官，您的钱不够！来人啊！轰出去！";break;
        case '3':if (Player.Money>=500)Player.d3++,Player.Money-=500;else cout<<"这位客官，您的钱不够！来人啊！轰出去！";break;
        case '4':if (Player.Money>=1250)Player.d4++,Player.Money-=1250;else cout<<"这位客官，您的钱不够！来人啊！轰出去！";break;
        case '5':if (Player.Money>=1750)Player.d5++,Player.Money-=1750;else cout<<"这位客官，您的钱不够！来人啊！轰出去！";break;
    }
    print("拜拜~~~~~~~~~~~~~~~");
    system("cls");
    return;
}
void shop3(){
    system("cls");
    print("道具店老板娘：嗑药吗？少年？");
    system("cls");
    print("1.大补丸（回复200点HP）··············60金币");printf("\n");
    print("2.剑气纵横丹（ATK永久增加20点）··········85金币");printf("\n");
    print("3.金刚仙丹（DEF永久增加5点）···········90金币");printf("\n");
    print("4.肥宅快乐丹（HP永久增加60点）··········100金币");printf("\n");
    print("5.鹤顶红（立即狗带，绝不忽悠！）·········500金币");printf("\n");
    qwe=_getch();
    switch (qwe){
        case '1':if (Player.Money>=60)Player.q1++,Player.Money-=60;else cout<<"这位客官，您的钱不够！别来调戏老娘！！";break;
        case '2':if (Player.Money>=85)Player.q2++,Player.Money-=85;else cout<<"这位客官，您的钱不够！别来调戏老娘！！";break;
        case '3':if (Player.Money>=90)Player.q3++,Player.Money-=90;else cout<<"这位客官，您的钱不够！别来调戏老娘！！";break;
        case '4':if (Player.Money>=100)Player.q4++,Player.Money-=100;else cout<<"这位客官，您的钱不够！别来调戏老娘！！";break;
        case '5':if (Player.Money>=500)Player.q5++,Player.Money-=500;else cout<<"这位客官，您的钱不够！别来调戏老娘！！";break;
    }
    print("拜拜~~~~~~~~~~~~~~~");
    system("cls");
    return;
}
void shop4(){
    system("cls");
    print("黑市商人：小哥，买符吗？打怪更有利！");
    system("cls");
    print("1.回血符（+500HP）·················60金币");printf("\n");
    print("2.凝神归元符（+1000HP）···············200金币");printf("\n");
    print("3.左右互搏符（永久伤害翻倍！）···········2000金币");printf("\n");
    print("4.亢龙有悔符（看人品，造成50000以内随机伤害！）···2500金币");printf("\n");
    print("5.酒神符符（造成20000以上，100000以下伤害！）·····3000金币");printf("\n");
    print("6.夺魂咒符（百分之五的几率直接死掉）········5000金币");printf("\n");
    print("7.吸星大法符（造成500点吸血）············1000金币");printf("\n");
    print("8.独孤九剑符（永久伤害九倍）············8000金币");printf("\n");
    print("9.钠水神功符（随机伤害）··············9000金币");printf("\n");
    qwe=_getch();
    switch (qwe){
        case '1':if (Player.Money>=60)Player.k1++,Player.Money-=60;else cout<<"这位客官，您的钱不够！请走开！";break;
        case '2':if (Player.Money>=200)Player.k2++,Player.Money-=200;else cout<<"这位客官，您的钱不够！请走开！";break;
        case '3':if (Player.Money>=2000)Player.k3++,Player.Money-=2000;else cout<<"这位客官，您的钱不够！请走开！";break;
        case '4':if (Player.Money>=2500)Player.k4++,Player.Money-=2500;else cout<<"这位客官，您的钱不够！请走开！";break;
        case '5':if (Player.Money>=3000)Player.k5++,Player.Money-=3000;else cout<<"这位客官，您的钱不够！请走开！";break;
        case '6':if (Player.Money>=5000)Player.k6++,Player.Money-=5000;else cout<<"这位客官，您的钱不够！请走开！";break;
        case '7':if (Player.Money>=1000)Player.k7++,Player.Money-=1000;else cout<<"这位客官，您的钱不够！请走开！";break;
        case '8':if (Player.Money>=8000)Player.k8++,Player.Money-=8000;else cout<<"这位客官，您的钱不够！请走开！";break;
        case '9':if (Player.Money>=9000)Player.k9++,Player.Money-=9000;else cout<<"这位客官，您的钱不够！请走开！";break;
    }
    print("再见！");
    system("cls");
    return;
}
void sp(){
    system("cls");
    print("这里是祭坛，可以强化自身，武器。但是会破除你所有防御，用掉你所有金钱！。（y/n）");
    qwe=_getch();
    if (qwe=='n'){
        system("cls");
        print("做好觉悟后再来吧！");
        system("cls");
        return;
    }else{
        system("cls");
        print("你将所有金币洒在祭坛上！");printf("\n");
        print("你的护甲全都爆炸！");printf("\n");
        print("慢慢的，意识逐渐恢复！");printf("\n");
        print("成功！！");printf("\n");
        Player.ATK*=floor(Player.DEF/10);
        Player.DEF=0;
        Player.Money=0;
        return;
    }
    system("cls");
}
void go(int w){
    switch (w){
        case 0:x=7,y=19;break;
        case 1:{
            if (where==0)
                x=7,y=0;
            else if (where==2)
                x=19,y=16;
            break;
        }
        case 2:{
            if (where==3)
                x=7,y=0;
            else if (where==1)
                x=0,y=16;
            break;
        }
        case 3:{
            if (where==2)
                x=7,y=19;
            else if (where==4)
                x=11,y=0;
            break;
        }
        case 4:x=11,y=19;break;
    }
    where=w;
}
void lvup(){
    if (Player.EXP>=Player.MAXEXP){
        system("cls");
        print("你升了");
        printf("%d级！",Player.EXP/Player.MAXEXP);
        Sleep(1000);
        Player.LV+=Player.EXP/Player.MAXEXP;
        Player.ATK+=(Player.EXP/Player.MAXEXP)*20;
        Player.DEF+=(Player.EXP/Player.MAXEXP)*2;
        Player.EXP%=Player.MAXEXP;
        Player.MAXEXP+=rand()%500;
        Player.MAXHP+=rand()%500;
    }else{
        system("cls");
        print("然而你并没有升级.");
        system("cls");
        return;
    }
}
bool fight_to_jiangshi(){
    system("cls");
    string name="僵尸";
    int HP=1200,MAXHP=1200,ATK=70,DEF=16;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}        僵尸 *");printf("\n");
        printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}       |X X| *");printf("\n");
        printf("*  | V | [6]       | O | *");printf("\n");
        printf("*   OVO  ZXZ        CVD  *");printf("\n");
        printf("*  /N N===I     3oo=OOO  *");printf("\n");
        printf("* //N N   I     3oo=SSS  *");printf("\n");
        printf("*// ONO   O         RRR  *");printf("\n");
        printf("*P  UMU             S S  *");printf("\n");
        printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            SS SS *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.攻击   2.逃跑   3.技能  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("三十六计，走为上计！");
            system("cls");
            return false;
        }else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*       >  {=}      僵尸 *");printf("\n");
            printf("*     _/_  [6]      ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*    |O O| {6}     |X X| *");printf("\n");
            printf("*    | V | [6]     | O | *");printf("\n");
            printf("*     OVO  ZXZ      CVD  *");printf("\n");
            printf("*    /N N===I   3oo=OOO  *");printf("\n");
            printf("*   //N N   I   3oo=SSS  *");printf("\n");
            printf("*  // ONO   O       RRR  *");printf("\n");
            printf("*  P  UMU           S S  *");printf("\n");
            printf("*     U U           S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*     D D          SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*       >       //  僵尸 *");printf("\n");
            printf("*     _/_      ///  ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*    |O O|    ///  |X X| *");printf("\n");
            printf("*    | V |   ///   | O | *");printf("\n");
            printf("*     OVO    //     CVD  *");printf("\n");
            printf("*    /N N===/   3oo=OOO  *");printf("\n");
            printf("*   //N N       3oo=SSS  *");printf("\n");
            printf("*  // ONO           RRR  *");printf("\n");
            printf("*  P  UMU           S S  *");printf("\n");
            printf("*     U U           S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*     D D          SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*       >           僵尸 *");printf("\n");
            printf("*     _/_           ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*    |O O|         |X X| *");printf("\n");
            printf("*    | V |         | O | *");printf("\n");
            printf("*     OVO    =========== *");printf("\n");
            printf("*    /N N====+========== *");printf("\n");
            printf("*   //N N    =========== *");printf("\n");
            printf("*  // ONO           RRR  *");printf("\n");
            printf("*  P  UMU           S S  *");printf("\n");
            printf("*     U U           S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*     D D          SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(500);system("cls");
            if (HP<=0){
                print("你赢了！获得100金币！300经验值！");
                Player.EXP+=300;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=100;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I   3oo  =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I 3oo    =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N3ooI        =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V ***6]       | O | *");printf("\n");
            printf("*   OV*+o+*Z        CVD  *");printf("\n");
            printf("*  /N *ooo*     3oo=OOO  *");printf("\n");
            printf("* //N *+o+*     3oo=SSS  *");printf("\n");
            printf("*// ONO***O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(500);system("cls");
            if (Player.HP<=0){
                print("你被咬死了！");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.你有%d张回血符！\n",Player.k1);
            printf("w.你有%d张凝神归元符！\n",Player.k2);
            printf("e.你有%d张左右互搏符！\n",Player.k3);
            printf("r.你有%d张亢龙有悔符！\n",Player.k4);
            printf("t.你有%d张酒神符！\n",Player.k5);
            printf("y.你有%d张夺魂符！\n",Player.k6);
            printf("u.你有%d张吸星大法符！\n",Player.k7);
            printf("i.你有%d张独孤九剑符！\n",Player.k8);
            printf("o.你有%d张钠水神功符！\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("感到一阵舒畅！HP+500");Player.HP+=500;}else print("你没有！");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("感觉一阵电流一般的快感流遍全身！HP+1000");Player.HP+=1000;}else print("你没有！");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("你的双手能使用不同的招式！伤害翻倍！");Player.ATK*=2;}else print("你没有！");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("掌风一下子呼了出去，天崩地裂！");sd=rand()%50000+1;HP-=sd;}else print("你没有！");break;
                case 't':if (Player.k5>=1){Player.k5--;print("一股巨大的力量冲了出来！");sd=rand()%80000+20000;HP-=sd;}else print("你没有！");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("夺魂！！！");if ((rand()%21)%10==0)HP=0;}else print("你没有！");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("看我神功！！！！");HP-=500;Player.HP+=500;}else print("你没有！");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("独孤九剑！秒天秒地！");Player.ATK*=9;};break;
                case 'o':if (Player.k9>=1){Player.k9--;print("钠水神功，绽放激烈的火花！");sd=rand();HP-=sd;}else print("你没有！");break;
            }
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]   /  / ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}/      |X X| *");printf("\n");
            printf("*  | V | [6]      *| O | *");printf("\n");
            printf("*   OVO  ZXZ  *     CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I  /  3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU    * *      S S  *");printf("\n");
            printf("*   U U /           S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D  /      /  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]     / | O | *");printf("\n");
            printf("*   OVO  ZXZ   /    CVD  *");printf("\n");
            printf("*  /N N===I  *3//  =OOO  *");printf("\n");
            printf("* //N N   I /// 3oo=SSS  *");printf("\n");
            printf("*// ONO   O //      RRR  *");printf("\n");
            printf("*P  UMU     ///     S S  *");printf("\n");
            printf("*   U U   / *       S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I   //o  =OOO  *");printf("\n");
            printf("* //N N   I  // 3oo=SSS  *");printf("\n");
            printf("*// ONO   O ///     RRR  *");printf("\n");
            printf("*P  UMU    ///      S S  *");printf("\n");
            printf("*   U U   ////      S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D   ///      SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸/*");printf("\n");
            printf("*   _/_  [6]        _////*敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |/////*");printf("\n");
            printf("*  | V | [6]       ///// *");printf("\n");
            printf("*   OVO  ZXZ       ////  *");printf("\n");
            printf("*  /N N===I   3oo ////O  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            system("cls");
            if (HP<=0){
                print("你赢了！获得100金币！300经验值！");
                Player.EXP+=300;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=100;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I   3oo  =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I 3oo    =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N3ooI        =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}        僵尸 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V ***6]       | O | *");printf("\n");
            printf("*   OV*+o+*Z        CVD  *");printf("\n");
            printf("*  /N *ooo*     3oo=OOO  *");printf("\n");
            printf("* //N *+o+*     3oo=SSS  *");printf("\n");
            printf("*// ONO***O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(500);system("cls");
            if (Player.HP<=0){
                print("你被咬死了！");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_sheshou(){
    system("cls");
    string name="僵尸";
    int HP=750,MAXHP=750,ATK=100,DEF=2;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}     骷髅射手*");printf("\n");
        printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}      +|X X| *");printf("\n");
        printf("*  | V | [6]     +|| O | *");printf("\n");
        printf("*   OVO  ZXZ    + | ===  *");printf("\n");
        printf("*  /N N===I   <+--|--|   *");printf("\n");
        printf("* //N N   I    |-----|   *");printf("\n");
        printf("*// ONO   O     + |  |   *");printf("\n");
        printf("*P  UMU          +| ===  *");printf("\n");
        printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D             | |  *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.攻击   2.逃跑   3.技能  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("三十六计，走为上计！");
            system("cls");
            return false;
        }else if (qwe=='1'){
            int sd;
            system("cls");
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   <+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >          骷髅射手*");printf("\n");
            printf("*   _/_             ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O|          +|X X| *");printf("\n");
            printf("*  | V |         +|| O | *");printf("\n");
            printf("*   OVO   |     + | ===  *");printf("\n");
            printf("*  /N N===+============= *");printf("\n");
            printf("* //N N   |    |-----|   *");printf("\n");
            printf("*// ONO         + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >          骷髅射手*");printf("\n");
            printf("*   _/_             ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O|          +|X X| *");printf("\n");
            printf("*  | V |  |      +|| O | *");printf("\n");
            printf("*   OVO  =+============= *");printf("\n");
            printf("*  /N N=/ |   <*  |  |   *");printf("\n");
            printf("* //N N        |-----|   *");printf("\n");
            printf("*// ONO         + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >          骷髅射手*");printf("\n");
            printf("*   _/_             ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O|          +|X X| *");printf("\n");
            printf("*  | V |         +|| O | *");printf("\n");
            printf("*   OVO   |     + | ===  *");printf("\n");
            printf("*  /N N===+============= *");printf("\n");
            printf("* //N N   |    |-----|   *");printf("\n");
            printf("*// ONO         + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >          骷髅射手*");printf("\n");
            printf("*   _/_             ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O|          +|X X| *");printf("\n");
            printf("*  | V |         +|| O | *");printf("\n");
            printf("*   OVO         + | ===  *");printf("\n");
            printf("*  /N N=| |    |-----|   *");printf("\n");
            printf("* //N N ==+============= *");printf("\n");
            printf("*// ONO   |     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得50金币！400经验值！");
                Player.EXP+=400;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=50;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   <+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I <==+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N==<=====+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N<=====<<  +--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  AAAAAAAAA     +|| O | *");printf("\n");
            printf("*  AAAAAAAAA    + | ===  *");printf("\n");
            printf("*  AAAAAAAAA  <+--|--|   *");printf("\n");
            printf("* /AAAAAAAAA   |-----|   *");printf("\n");
            printf("*//AAAAAAAAA    + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被射成马蜂窝了！活不过来了！");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.你有%d张回血符！\n",Player.k1);
            printf("w.你有%d张凝神归元符！\n",Player.k2);
            printf("e.你有%d张左右互搏符！\n",Player.k3);
            printf("r.你有%d张亢龙有悔符！\n",Player.k4);
            printf("t.你有%d张酒神符！\n",Player.k5);
            printf("y.你有%d张夺魂符！\n",Player.k6);
            printf("u.你有%d张吸星大法符！\n",Player.k7);
            printf("i.你有%d张独孤九剑符！\n",Player.k8);
            printf("o.你有%d张钠水神功符！\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("感到一阵舒畅！HP+500");Player.HP+=500;}else print("你没有！");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("感觉一阵电流一般的快感流遍全身！HP+1000");Player.HP+=1000;}else print("你没有！");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("你的双手能使用不同的招式！伤害翻倍！");Player.ATK*=2;};break;
                case 'r':if (Player.k4>=1){Player.k4--;print("掌风一下子呼了出去，天崩地裂！");sd=rand()%50000+1;HP-=sd;}else print("你没有！");break;
                case 't':if (Player.k5>=1){Player.k5--;print("一股巨大的力量冲了出来！");sd=rand()%80000+20000;HP-=sd;}else print("你没有！");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("夺魂！！！");if ((rand()%21)%10==0)HP=0;}else print("你没有！");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("看我神功！！！！");HP-=500;Player.HP+=500;}else print("你没有！");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("独孤九剑！秒天秒地！");Player.ATK*=9;}else print("你没有！");break;
                case 'o':if (Player.k9>=1){Player.k9--;print("钠水神功，绽放激烈的火花！");sd=rand();HP-=sd;}else print("你没有！");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   <+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]  ---------- *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   <+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU        --------  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   ---------- *");printf("\n");
            printf("* //N N   I    |------   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D        --------  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        __/  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X/X| *");printf("\n");
            printf("*  | V | [6]     +||/O |/*");printf("\n");
            printf("*   OVO  ZXZ    + |/===/ *");printf("\n");
            printf("*  /N N===I   <+--/--|/  *");printf("\n");
            printf("* //N N   I    |-/---/   *");printf("\n");
            printf("*// ONO   O     / / /| / *");printf("\n");
            printf("*P  UMU          /| ==/  *");printf("\n");
            printf("*   U U         / + |/|  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D        /    / |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}  ++++++++++ *");printf("\n");
            printf("*  | V | [6]    ++|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   <+++|--+   *");printf("\n");
            printf("* //N N   I    |-+-++|   *");printf("\n");
            printf("*// ONO   O     * ++++   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U         * + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得100金币！300经验值！");
                Player.EXP+=300;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=100;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I   <+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N===I <==+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N N==<=====+--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  | V | [6]     +|| O | *");printf("\n");
            printf("*   OVO  ZXZ    + | ===  *");printf("\n");
            printf("*  /N<=====<<  +--|--|   *");printf("\n");
            printf("* //N N   I    |-----|   *");printf("\n");
            printf("*// ONO   O     + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     骷髅射手*");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      +|X X| *");printf("\n");
            printf("*  AAAAAAAAA     +|| O | *");printf("\n");
            printf("*  AAAAAAAAA    + | ===  *");printf("\n");
            printf("*  AAAAAAAAA  <+--|--|   *");printf("\n");
            printf("* /AAAAAAAAA   |-----|   *");printf("\n");
            printf("*//AAAAAAAAA    + |  |   *");printf("\n");
            printf("*P  UMU          +| ===  *");printf("\n");
            printf("*   U U           + | |  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D             | |  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被射成马蜂窝了！活不过来了！");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_kulipa(){
    system("cls");
    string name="僵尸";
    int HP=1300,MAXHP=1300,ATK=80,DEF=20;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}      苦力怕 *");printf("\n");
        printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}       |U U| *");printf("\n");
        printf("*  | V | [6]       | A | *");printf("\n");
        printf("*   OVO  ZXZ        CVD  *");printf("\n");
        printf("*  /N N===I         OOO  *");printf("\n");
        printf("* //N N   I         SSS o*");printf("\n");
        printf("*// ONO   O         RRR M*");printf("\n");
        printf("*P  UMU             SSS  *");printf("\n");
        printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D           SSSASSS*");printf("\n");
        printf("**************************");printf("\n");
        printf("1.攻击   2.逃跑    3.技能 ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("三十六计，走为上计！");
            system("cls");
            return false;
        }else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  | V | ZZZ       | A | *");printf("\n");
            printf("*   OVO  ZZZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  ZZZ      苦力怕 *");printf("\n");
            printf("*   _/_  ZZZ        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| ZZZ       |U U| *");printf("\n");
            printf("*  | V | ZZZ       | A | *");printf("\n");
            printf("*   OVO  ZZZ        CVD  *");printf("\n");
            printf("*  /N N===Z         OOO  *");printf("\n");
            printf("* //N N   Z         SSS o*");printf("\n");
            printf("*// ONO   Z         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*ZZZZZZ           苦力怕 *");printf("\n");
            printf("* ZZZZZZZ           ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O OZZZ         |U U| *");printf("\n");
            printf("*  | V ZZZZ        | A | *");printf("\n");
            printf("*   OVO ZZZ         CVD  *");printf("\n");
            printf("*  /N N===Z         OOO  *");printf("\n");
            printf("* //N N   Z         SSS o*");printf("\n");
            printf("*// ONO             RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >       ZZZZ苦力怕 *");printf("\n");
            printf("*   _/_         ZZZZ__  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O|        ZZZZU U| *");printf("\n");
            printf("*  | V |       ZZZZ| A | *");printf("\n");
            printf("*   OVO        ZZZZZCVD  *");printf("\n");
            printf("*  /N N===    ZZZZ  OOO  *");printf("\n");
            printf("* //N N       ZZZZ  SSS o*");printf("\n");
            printf("*// ONO     ZZZZ    RRR M*");printf("\n");
            printf("*P  UMU    ZZZZZ    SSS  *");printf("\n");
            printf("*   U U   ZZZZ    SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D  ZZZZZZ   SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得150金币！200经验值！");
                Player.EXP+=200;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=150;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*   _/_  [6]        TTT  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       TTTTT *");printf("\n");
            printf("*  | V | [6]       TTTTT *");printf("\n");
            printf("*   OVO  ZXZ        TTT  *");printf("\n");
            printf("*  /N N===I         TTT  *");printf("\n");
            printf("* //N N   I         TTT T*");printf("\n");
            printf("*// ONO   O        TTTTTT*");printf("\n");
            printf("*P  UMU            TTTTT *");printf("\n");
            printf("*   U U           TTTTTTT*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}TTTTTTTTTTTT *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /NTTTTTTTTTTTTTTTTTTT *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONOTTTTTTTTTTTTTTTT M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*TTTTTTTTT6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  TTTTTTTT6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* /TT TTTTTTTT      SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  TTTTTT          SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("* TTTTTTTT        SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |TTT| *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   ITTTTTTTT SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被炸死了！活不过来了！");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.你有%d张回血符！\n",Player.k1);
            printf("w.你有%d张凝神归元符！\n",Player.k2);
            printf("e.你有%d张左右互搏符！\n",Player.k3);
            printf("r.你有%d张亢龙有悔符！\n",Player.k4);
            printf("t.你有%d张酒神符！\n",Player.k5);
            printf("y.你有%d张夺魂符！\n",Player.k6);
            printf("u.你有%d张吸星大法符！\n",Player.k7);
            printf("i.你有%d张独孤九剑符！\n",Player.k8);
            printf("o.你有%d张钠水神功符！\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("感到一阵舒畅！HP+500");Player.HP+=500;}else print("你没有！");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("感觉一阵电流一般的快感流遍全身！HP+1000");Player.HP+=1000;}else print("你没有！");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("你的双手能使用不同的招式！伤害翻倍！");Player.ATK*=2;}else print("你没有！");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("掌风一下子呼了出去，天崩地裂！");sd=rand()%50000+1;HP-=sd;}else print("你没有！");break;
                case 't':if (Player.k5>=1){Player.k5--;print("一股巨大的力量冲了出来！");sd=rand()%80000+20000;HP-=sd;}else print("你没有！");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("夺魂！！！");if ((rand()%21)%10==0)HP=0;}else print("你没有！");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("看我神功！！！！");HP-=500;Player.HP+=500;}else print("你没有！");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("独孤九剑！秒天秒地！");Player.ATK*=9;}else print("你没有！");break;
                case 'o':if (Player.k9>=1){Player.k9--;print("钠水神功，绽放激烈的火花！");sd=rand();HP-=sd;}else print("你没有！");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  | V | ZZZ       | A | *");printf("\n");
            printf("*   OVO  ZZZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  ZZZ      苦力怕 *");printf("\n");
            printf("*   _/_  ZZZ        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| ZZZ       |U U| *");printf("\n");
            printf("*  | V | ZZZ       | A | *");printf("\n");
            printf("*   OVO  ZZZ        CVD  *");printf("\n");
            printf("*  /N N===Z         OOO  *");printf("\n");
            printf("* //N N   Z         SSS o*");printf("\n");
            printf("*// ONO   Z         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*ZZZZZZ           苦力怕 *");printf("\n");
            printf("* ZZZZZZZ           ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O OZZZ         |U U| *");printf("\n");
            printf("*  | V ZZZZ        | A | *");printf("\n");
            printf("*   OVO ZZZ         CVD  *");printf("\n");
            printf("*  /N N===Z         OOO  *");printf("\n");
            printf("* //N N   Z         SSS o*");printf("\n");
            printf("*// ONO             RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >       ZZZZ苦力怕 *");printf("\n");
            printf("*   _/_         ZZZZ__  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O|        ZZZZU U| *");printf("\n");
            printf("*  | V |       ZZZZ| A | *");printf("\n");
            printf("*   OVO        ZZZZZCVD  *");printf("\n");
            printf("*  /N N===    ZZZZ  OOO  *");printf("\n");
            printf("* //N N       ZZZZ  SSS o*");printf("\n");
            printf("*// ONO     ZZZZ    RRR M*");printf("\n");
            printf("*P  UMU    ZZZZZ    SSS  *");printf("\n");
            printf("*   U U   ZZZZ    SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D  ZZZZZZ   SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得100金币！300经验值！");
                Player.EXP+=300;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=100;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*   _/_  [6]        TTT  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       TTTTT *");printf("\n");
            printf("*  | V | [6]       TTTTT *");printf("\n");
            printf("*   OVO  ZXZ        TTT  *");printf("\n");
            printf("*  /N N===I         TTT  *");printf("\n");
            printf("* //N N   I         TTT T*");printf("\n");
            printf("*// ONO   O        TTTTTT*");printf("\n");
            printf("*P  UMU            TTTTT *");printf("\n");
            printf("*   U U           TTTTTTT*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}TTTTTTTTTTTT *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /NTTTTTTTTTTTTTTTTTTT *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONOTTTTTTTTTTTTTTTT M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*TTTTTTTTT6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  TTTTTTTT6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* /TT TTTTTTTT      SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  TTTTTT          SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("* TTTTTTTT        SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |TTT| *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   ITTTTTTTT SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      苦力怕 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |U U| *");printf("\n");
            printf("*  | V | [6]       | A | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I         OOO  *");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU             SSS  *");printf("\n");
            printf("*   U U           SSSASSS*我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SSSASSS*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被炸死了！活不过来了！");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_jiangshiwang(){
    system("cls");
    string name="僵尸";
    int HP=4000,MAXHP=4000,ATK=100,DEF=30;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}   6   僵尸王*");printf("\n");
        printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6} 66666 |X X| *");printf("\n");
        printf("*  | V | [6]   6   | O | *");printf("\n");
        printf("*   OVO  ZXZ   6    666  *");printf("\n");
        printf("*  /N N===I    6666666666*");printf("\n");
        printf("* //N N   I         666 6*");printf("\n");
        printf("*// ONO   O         666 6*");printf("\n");
        printf("*P  UMU             6 6 6*");printf("\n");
        printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            66 66 *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.攻击   2.逃跑    3.技能 ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("三十六计，走为上计！");
            system("cls");
            return false;
        }else if (qwe=='1'){
            int sd;
            system("cls");
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |+ +| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   |/|  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |+ +| {6} 66666 |X X| *");printf("\n");
            printf("*  ||V|| [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   |/|  [6]   6    asdf *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |+ +| {6} 66666 |X X| *");printf("\n");
            printf("*  ||V|| [6]   6   | sdv *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6asfbbfvVV*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O      sdfaa6 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得1000金币！1000经验值！");
                Player.EXP+=1000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=1000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*666666666666666666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*66666666666666666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*66666666666666666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*666666666666666666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被打死了！");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.你有%d张回血符！\n",Player.k1);
            printf("w.你有%d张凝神归元符！\n",Player.k2);
            printf("e.你有%d张左右互搏符！\n",Player.k3);
            printf("r.你有%d张亢龙有悔符！\n",Player.k4);
            printf("t.你有%d张酒神符！\n",Player.k5);
            printf("y.你有%d张夺魂符！\n",Player.k6);
            printf("u.你有%d张吸星大法符！\n",Player.k7);
            printf("i.你有%d张独孤九剑符！\n",Player.k8);
            printf("o.你有%d张钠水神功符！\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("感到一阵舒畅！HP+500");Player.HP+=500;}else print("你没有！");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("感觉一阵电流一般的快感流遍全身！HP+1000");Player.HP+=1000;}else print("你没有！");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("你的双手能使用不同的招式！伤害翻倍！");Player.ATK*=2;}else print("你没有！");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("掌风一下子呼了出去，天崩地裂！");sd=rand()%50000+1;HP-=sd;}else print("你没有！");break;
                case 't':if (Player.k5>=1){Player.k5--;print("一股巨大的力量冲了出来！");sd=rand()%80000+20000;HP-=sd;}else print("你没有！");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("夺魂！！！");if ((rand()%21)%10==0)HP=0;}else print("你没有！");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("看我神功！！！！");HP-=500;Player.HP+=500;}else print("你没有！");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("独孤九剑！秒天秒地！");Player.ATK*=9;}else print("你没有！");break;
                case 'o':if (Player.k9>=1){Player.k9--;print("钠水神功，绽放激烈的火花！");sd=rand();HP-=sd;}else print("你没有！");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |+ +| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   |/|  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |+ +| {6} 66666 |X X| *");printf("\n");
            printf("*  ||V|| [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   |/|  [6]   6    asdf *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |+ +| {6} 66666 |X X| *");printf("\n");
            printf("*  ||V|| [6]   6   | sdv *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6asfbbfvVV*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O      sdfaa6 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得100金币！300经验值！");
                Player.EXP+=300;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=100;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*666666666666666666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*66666666666666666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*66666666666666666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*666666666666666666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   6   僵尸王*");printf("\n");
            printf("*   _/_  [6]   6    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} 66666 |X X| *");printf("\n");
            printf("*  | V | [6]   6   | O | *");printf("\n");
            printf("*   OVO  ZXZ   6    666  *");printf("\n");
            printf("*  /N N===I    6666666666*");printf("\n");
            printf("* //N N   I         666 6*");printf("\n");
            printf("*// ONO   O         666 6*");printf("\n");
            printf("*P  UMU             6 6 6*");printf("\n");
            printf("*   U U             6 6  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            66 66 *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑    3.技能 ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被打死了！");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_kkk(){
    system("cls");
    string name="僵尸";
    long long HP=999999999,MAXHP=999999999,ATK=Player.DEF+750,DEF=0;
    print("KKK：哼，弱鸡吱吱乱叫！上次我大意了！现在去死吧！！！");
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}  暴走kkksc06*");printf("\n");
        printf("*   _/_  [6]    ==+ DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}       DFDFD *");printf("\n");
        printf("*  | V | [6]   ==+ |FFF| *");printf("\n");
        printf("*   OVO  ZXZ ==+    CFD  *");printf("\n");
        printf("*  /N N===I     Esd=endlo*");printf("\n");
        printf("* //N N   I       ==+SS o*");printf("\n");
        printf("*// ONO   O  ==+    RRR M*");printf("\n");
        printf("*P  UMU ==+        sS Ss *");printf("\n");
        printf("*   U U   ==+   ==+sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            sS Ss *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.攻击   2.逃跑   3.技能  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("大战在即，你还想跑？");
            system("cls");
        }else if (qwe=='1'){
            int sd;
            system("cls");
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/_  [6]    ==+ DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]   ==+ |FFF| *");printf("\n");
            printf("*   OVO  ZXZ ==+    CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO   O  ==+    RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U         ==+sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/_  [6]    ==+ DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]   ==+ |FFF| *");printf("\n");
            printf("*   OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U         ==+sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/_  [6]        DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]       |FFF| *");printf("\n");
            printf("*   OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U            sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/_  [6]        DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}        FDFD *");printf("\n");
            printf("*  | V | [6]         FF| *");printf("\n");
            printf("*   OVO  ZXZ          D  *");printf("\n");
            printf("*  /N N===I          ndlo*");printf("\n");
            printf("* //N N   I           S o*");printf("\n");
            printf("*// ONO   O           R M*");printf("\n");
            printf("*P  UMU               Ss *");printf("\n");
            printf("*   U U               Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D               Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/_  [6]        DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]       |FFF| *");printf("\n");
            printf("*   OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U            sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("kkk:没想到!!呜哇~~~~（一口老血）");
                print("游戏通关！你帮助面包姐姐逃离kkk的魔爪！");
                Player.EXP+=999999;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=999999;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/_  [6]==+     DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]  ==+  |FFF| *");printf("\n");
            printf("*==+OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO   O ==+     RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U   ==+      sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/==+[6]        DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]==+    |FFF| *");printf("\n");
            printf("*==+OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO==+O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*==+U U            sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     sss{=}  暴走kkksc06*");printf("\n");
            printf("*   _/sss[6]        DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O sss{6}sss    DFDFD *");printf("\n");
            printf("*sss V | [6]sss    |FFF| *");printf("\n");
            printf("*sssOVO  ZXZsss     CFD  *");printf("\n");
            printf("*sssN N===I     Esd=endlo*");printf("\n");
            printf("* //N NsssI       ==+SS o*");printf("\n");
            printf("*// ONOsssO         RRR M*");printf("\n");
            printf("*P  UMUsss         sS Ss *");printf("\n");
            printf("*==+U U            sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/==+[6]        DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]==+    |FFF| *");printf("\n");
            printf("*==+OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //ssssssI       ==+SS o*");printf("\n");
            printf("*// ssssssO         RRR M*");printf("\n");
            printf("*P  ssssss         sS Ss *");printf("\n");
            printf("*==+ssssss         sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   ssssss         sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*sssssssssssss暴走kkksc06*");printf("\n");
            printf("*sssssssssssss      DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*sssssssssssss     DFDFD *");printf("\n");
            printf("*sssssssssssss+    |FFF| *");printf("\n");
            printf("*sssssssssssss      CFD  *");printf("\n");
            printf("*sssssssssssss  Esd=endlo*");printf("\n");
            printf("*sssssssssssss    ==+SS o*");printf("\n");
            printf("*sssssssssssss      RRR M*");printf("\n");
            printf("*sssssssssssss     sS Ss *");printf("\n");
            printf("*sssssssssssss     sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*sssssssssssss     sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被刺死了！活不过来了！");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.你有%d张回血符！\n",Player.k1);
            printf("w.你有%d张凝神归元符！\n",Player.k2);
            printf("e.你有%d张左右互搏符！\n",Player.k3);
            printf("r.你有%d张亢龙有悔符！\n",Player.k4);
            printf("t.你有%d张酒神符！\n",Player.k5);
            printf("y.你有%d张夺魂符！\n",Player.k6);
            printf("u.你有%d张吸星大法符！\n",Player.k7);
            printf("i.你有%d张独孤九剑符！\n",Player.k8);
            printf("o.你有%d张钠水神功符！\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("感到一阵舒畅！HP+500");Player.HP+=500;}else print("你没有！");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("感觉一阵电流一般的快感流遍全身！HP+1000");Player.HP+=1000;}else print("你没有！");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("你的双手能使用不同的招式！伤害翻倍！");Player.ATK*=2;}else print("你没有！");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("掌风一下子呼了出去，天崩地裂！");sd=rand()%50000+1;HP-=sd;}else print("你没有！");break;
                case 't':if (Player.k5>=1){Player.k5--;print("一股巨大的力量冲了出来！");sd=rand()%80000+20000;HP-=sd;}else print("你没有！");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("夺魂！！！");if ((rand()%21)%10==0)HP=0;}else print("你没有！");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("看我神功！！！！");HP-=500;Player.HP+=500;}else print("你没有！");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("独孤九剑！秒天秒地！");Player.ATK*=9;}else print("你没有！");break;
                case 'o':if (Player.k9>=1){Player.k9--;print("钠水神功，绽放激烈的火花！");sd=rand();HP-=sd;}else print("你没有！");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/_  [6]    ==+ DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]   ==+ |FFF| *");printf("\n");
            printf("*   OVO  ZXZ ==+    CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO   O  ==+    RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U         ==+sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/_  [6]    ==+ DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]   ==+ |FFF| *");printf("\n");
            printf("*   OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U         ==+sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/_  [6]        DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]       |FFF| *");printf("\n");
            printf("*   OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U            sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/_  [6]        DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}        FDFD *");printf("\n");
            printf("*  | V | [6]         FF| *");printf("\n");
            printf("*   OVO  ZXZ          D  *");printf("\n");
            printf("*  /N N===I          ndlo*");printf("\n");
            printf("* //N N   I           S o*");printf("\n");
            printf("*// ONO   O           R M*");printf("\n");
            printf("*P  UMU               Ss *");printf("\n");
            printf("*   U U               Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D               Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/_  [6]        DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]       |FFF| *");printf("\n");
            printf("*   OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I         SSS o*");printf("\n");
            printf("*// ONO   O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U            sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得9999999金币！99999经验值！你救出了面包！");
                Player.EXP+=99999999;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=99999;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/_  [6]==+     DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]  ==+  |FFF| *");printf("\n");
            printf("*==+OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO   O ==+     RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*   U U   ==+      sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/==+[6]        DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]==+    |FFF| *");printf("\n");
            printf("*==+OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //N N   I       ==+SS o*");printf("\n");
            printf("*// ONO==+O         RRR M*");printf("\n");
            printf("*P  UMU            sS Ss *");printf("\n");
            printf("*==+U U            sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     sss{=}  暴走kkksc06*");printf("\n");
            printf("*   _/sss[6]        DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O sss{6}sss    DFDFD *");printf("\n");
            printf("*sss V | [6]sss    |FFF| *");printf("\n");
            printf("*sssOVO  ZXZsss     CFD  *");printf("\n");
            printf("*sssN N===I     Esd=endlo*");printf("\n");
            printf("* //N NsssI       ==+SS o*");printf("\n");
            printf("*// ONOsssO         RRR M*");printf("\n");
            printf("*P  UMUsss         sS Ss *");printf("\n");
            printf("*==+U U            sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}  暴走kkksc06*");printf("\n");
            printf("*   _/==+[6]        DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       DFDFD *");printf("\n");
            printf("*  | V | [6]==+    |FFF| *");printf("\n");
            printf("*==+OVO  ZXZ        CFD  *");printf("\n");
            printf("*  /N N===I     Esd=endlo*");printf("\n");
            printf("* //ssssssI       ==+SS o*");printf("\n");
            printf("*// ssssssO         RRR M*");printf("\n");
            printf("*P  ssssss         sS Ss *");printf("\n");
            printf("*==+ssssss         sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   ssssss         sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*sssssssssssss暴走kkksc06*");printf("\n");
            printf("*sssssssssssss      DDD  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*sssssssssssss     DFDFD *");printf("\n");
            printf("*sssssssssssss+    |FFF| *");printf("\n");
            printf("*sssssssssssss      CFD  *");printf("\n");
            printf("*sssssssssssss  Esd=endlo*");printf("\n");
            printf("*sssssssssssss    ==+SS o*");printf("\n");
            printf("*sssssssssssss      RRR M*");printf("\n");
            printf("*sssssssssssss     sS Ss *");printf("\n");
            printf("*sssssssssssss     sS Ss=+我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*sssssssssssss     sS Ss *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被羞辱致死了！活不过来了！");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_kkkshiwei(){
    system("cls");
    string name="僵尸";
    int HP=100000,MAXHP=100000,ATK=260,DEF=20;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}    A kkk侍卫*");printf("\n");
        printf("*   _/_  [6]    V   ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}    A  |O#O| *");printf("\n");
        printf("*  | V | [6]    V  |###| *");printf("\n");
        printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
        printf("*  /N N===I     Too=NNN  *");printf("\n");
        printf("* //N N   I     Ioo=SSS  *");printf("\n");
        printf("*// ONO   O         RRR  *");printf("\n");
        printf("*P  UMU             S S  *");printf("\n");
        printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            SS SS *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.攻击   2.逃跑   3.技能  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("三十六计，走为上计！");
            system("cls");
            return false;
        }else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk侍卫*");printf("\n");
            printf("*   _/_  [6]    V   ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |O#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ   AA   NNN  *");printf("\n");
            printf("*  /N N===I    AToo=NNN  *");printf("\n");
            printf("* //N N   I    AIoo=SSS  *");printf("\n");
            printf("*// ONO   O    A    RRR  *");printf("\n");
            printf("*P  UMU        A    S S  *");printf("\n");
            printf("*   U U        A    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D        A   SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk侍卫*");printf("\n");
            printf("*   _/_  [6]    V   AAA  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  AO#O| *");printf("\n");
            printf("*  | V | [6]    V A|###| *");printf("\n");
            printf("*   OVO  ZXZ    AA  NNN  *");printf("\n");
            printf("*  /N N===I     TAo=NNN  *");printf("\n");
            printf("* //N N   I     IAo=SSS  *");printf("\n");
            printf("*// ONO   O      A  RRR  *");printf("\n");
            printf("*P  UMU          A  S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D         A  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk侍卫*");printf("\n");
            printf("*   _/_  [6]    V   __AA *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |OAA| *");printf("\n");
            printf("*  | V | [6]    V  |AA#| *");printf("\n");
            printf("*   OVO  ZXZ    A  AANN  *");printf("\n");
            printf("*  /N N===I     TooANNN  *");printf("\n");
            printf("* //N N   I    AAAAAAAAA *");printf("\n");
            printf("*// ONO   O    AAA  RRAA *");printf("\n");
            printf("*P  UMU        A A  S AA *");printf("\n");
            printf("*   U U       AA A  S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D       A  A SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk侍卫*");printf("\n");
            printf("*   _/_  [6]    V   ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  AA#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
            printf("*  /N N===I     Too=AAAA *");printf("\n");
            printf("* //N N   I     Ioo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU            AAAA  *");printf("\n");
            printf("*   U U             SAAA *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk侍卫*");printf("\n");
            printf("*   _/_  [6]    V   ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |O#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
            printf("*  /N N===I     Too=NNN  *");printf("\n");
            printf("* //N N   I     Ioo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得2000金币！1000经验值！");
                Player.EXP+=1000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=2000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk侍卫*");printf("\n");
            printf("*   _/_  [6]    V   ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |O#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
            printf("*  /N N===I     Too=NNN  *");printf("\n");
            printf("* //N N   I     Ioo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   A kkk侍卫 *");printf("\n");
            printf("*   _/_  [6]   V   ___   *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   A  |O#O|  *");printf("\n");
            printf("*  | V | [6]   V  |###|  *");printf("\n");
            printf("*   OVO  ZXZ   A   NNN   *");printf("\n");
            printf("*  /N N===I    Too=NNN   *");printf("\n");
            printf("* //N N   I    Ioo=SSS   *");printf("\n");
            printf("*// ONO   O        RRR   *");printf("\n");
            printf("*P  UMU            S S   *");printf("\n");
            printf("*   U U            S S   *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     > AAAAAAAA kkk侍卫 *");printf("\n");
            printf("*   _/AAAAVVVVVV   ___   *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |OAAAVVVVVVVA  |O#O|  *");printf("\n");
            printf("*  |AAAVVVVV   V  |###|  *");printf("\n");
            printf("*   AAAVVVXZ   A   NNN   *");printf("\n");
            printf("*  /NAAVVVI    Too=NNN   *");printf("\n");
            printf("* //N AAVVVV   Ioo=SSS   *");printf("\n");
            printf("*// ONOAAAVVV      RRR   *");printf("\n");
            printf("*P  UMU AAVVVV     S S   *");printf("\n");
            printf("*   U U  AAA       S S   *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     > AAAAAAA  kkk侍卫 *");printf("\n");
            printf("*   _/AAAAVVVVV    ___   *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |OAAAVVVVVVV   |O#O|  *");printf("\n");
            printf("*  |AAAVVVVV      |###|  *");printf("\n");
            printf("*   AAAVVVXZ       NNN   *");printf("\n");
            printf("*  /NAAVVVI    Too=NNN   *");printf("\n");
            printf("* //N AAVVVV   Ioo=SSS   *");printf("\n");
            printf("*// ONOAAAVVV  A   RRR   *");printf("\n");
            printf("*P  UMU AAVVVV V   S S   *");printf("\n");
            printf("*   U U  AAA   A   S S   *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D        V  SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   A kkk侍卫 *");printf("\n");
            printf("*   _/_  [6]   V   ___   *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   A  |O#O|  *");printf("\n");
            printf("*  | V | [6]   V  |###|  *");printf("\n");
            printf("*   OVO  ZXZ   A   NNN   *");printf("\n");
            printf("*  /N N===I    Too=NNN   *");printf("\n");
            printf("* //N N   I    Ioo=SSS   *");printf("\n");
            printf("*// ONO   O        RRR   *");printf("\n");
            printf("*P  UMU            S S   *");printf("\n");
            printf("*   U U            S S   *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被砍死了！");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.你有%d张回血符！\n",Player.k1);
            printf("w.你有%d张凝神归元符！\n",Player.k2);
            printf("e.你有%d张左右互搏符！\n",Player.k3);
            printf("r.你有%d张亢龙有悔符！\n",Player.k4);
            printf("t.你有%d张酒神符！\n",Player.k5);
            printf("y.你有%d张夺魂符！\n",Player.k6);
            printf("u.你有%d张吸星大法符！\n",Player.k7);
            printf("i.你有%d张独孤九剑符！\n",Player.k8);
            printf("o.你有%d张钠水神功符！\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("感到一阵舒畅！HP+500");Player.HP+=500;}else print("你没有！");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("感觉一阵电流一般的快感流遍全身！HP+1000");Player.HP+=1000;}else print("你没有！");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("你的双手能使用不同的招式！伤害翻倍！");Player.ATK*=2;}else print("你没有！");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("掌风一下子呼了出去，天崩地裂！");sd=rand()%50000+1;HP-=sd;}else print("你没有！");break;
                case 't':if (Player.k5>=1){Player.k5--;print("一股巨大的力量冲了出来！");sd=rand()%80000+20000;HP-=sd;}else print("你没有！");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("夺魂！！！");if ((rand()%21)%10==0)HP=0;}else print("你没有！");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("看我神功！！！！");HP-=500;Player.HP+=500;}else print("你没有！");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("独孤九剑！秒天秒地！");Player.ATK*=9;};break;
                case 'o':if (Player.k9>=1){Player.k9--;print("钠水神功，绽放激烈的火花！");sd=rand();HP-=sd;}else print("你没有！");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk侍卫*");printf("\n");
            printf("*   _/_  [6]    V   ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |O#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ   AA   NNN  *");printf("\n");
            printf("*  /N N===I    AToo=NNN  *");printf("\n");
            printf("* //N N   I    AIoo=SSS  *");printf("\n");
            printf("*// ONO   O    A    RRR  *");printf("\n");
            printf("*P  UMU        A    S S  *");printf("\n");
            printf("*   U U        A    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D        A   SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk侍卫*");printf("\n");
            printf("*   _/_  [6]    V   AAA  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  AO#O| *");printf("\n");
            printf("*  | V | [6]    V A|###| *");printf("\n");
            printf("*   OVO  ZXZ    AA  NNN  *");printf("\n");
            printf("*  /N N===I     TAo=NNN  *");printf("\n");
            printf("* //N N   I     IAo=SSS  *");printf("\n");
            printf("*// ONO   O      A  RRR  *");printf("\n");
            printf("*P  UMU          A  S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D         A  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk侍卫*");printf("\n");
            printf("*   _/_  [6]    V   __AA *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |OAA| *");printf("\n");
            printf("*  | V | [6]    V  |AA#| *");printf("\n");
            printf("*   OVO  ZXZ    A  AANN  *");printf("\n");
            printf("*  /N N===I     TooANNN  *");printf("\n");
            printf("* //N N   I    AAAAAAAAA *");printf("\n");
            printf("*// ONO   O    AAA  RRAA *");printf("\n");
            printf("*P  UMU        A A  S AA *");printf("\n");
            printf("*   U U       AA A  S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D       A  A SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk侍卫*");printf("\n");
            printf("*   _/_  [6]    V   ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  AA#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
            printf("*  /N N===I     Too=AAAA *");printf("\n");
            printf("* //N N   I     Ioo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU            AAAA  *");printf("\n");
            printf("*   U U             SAAA *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk侍卫*");printf("\n");
            printf("*   _/_  [6]    V   ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |O#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
            printf("*  /N N===I     Too=NNN  *");printf("\n");
            printf("* //N N   I     Ioo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得2000金币！1000经验值！");
                Player.EXP+=1000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=2000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100)+100;
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    A kkk侍卫*");printf("\n");
            printf("*   _/_  [6]    V   ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}    A  |O#O| *");printf("\n");
            printf("*  | V | [6]    V  |###| *");printf("\n");
            printf("*   OVO  ZXZ    A   NNN  *");printf("\n");
            printf("*  /N N===I     Too=NNN  *");printf("\n");
            printf("* //N N   I     Ioo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   A kkk侍卫 *");printf("\n");
            printf("*   _/_  [6]   V   ___   *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   A  |O#O|  *");printf("\n");
            printf("*  | V | [6]   V  |###|  *");printf("\n");
            printf("*   OVO  ZXZ   A   NNN   *");printf("\n");
            printf("*  /N N===I    Too=NNN   *");printf("\n");
            printf("* //N N   I    Ioo=SSS   *");printf("\n");
            printf("*// ONO   O        RRR   *");printf("\n");
            printf("*P  UMU            S S   *");printf("\n");
            printf("*   U U            S S   *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     > AAAAAAAA kkk侍卫 *");printf("\n");
            printf("*   _/AAAAVVVVVV   ___   *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |OAAAVVVVVVVA  |O#O|  *");printf("\n");
            printf("*  |AAAVVVVV   V  |###|  *");printf("\n");
            printf("*   AAAVVVXZ   A   NNN   *");printf("\n");
            printf("*  /NAAVVVI    Too=NNN   *");printf("\n");
            printf("* //N AAVVVV   Ioo=SSS   *");printf("\n");
            printf("*// ONOAAAVVV      RRR   *");printf("\n");
            printf("*P  UMU AAVVVV     S S   *");printf("\n");
            printf("*   U U  AAA       S S   *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     > AAAAAAA  kkk侍卫 *");printf("\n");
            printf("*   _/AAAAVVVVV    ___   *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |OAAAVVVVVVV   |O#O|  *");printf("\n");
            printf("*  |AAAVVVVV      |###|  *");printf("\n");
            printf("*   AAAVVVXZ       NNN   *");printf("\n");
            printf("*  /NAAVVVI    Too=NNN   *");printf("\n");
            printf("* //N AAVVVV   Ioo=SSS   *");printf("\n");
            printf("*// ONOAAAVVV  A   RRR   *");printf("\n");
            printf("*P  UMU AAVVVV V   S S   *");printf("\n");
            printf("*   U U  AAA   A   S S   *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D        V  SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}   A kkk侍卫 *");printf("\n");
            printf("*   _/_  [6]   V   ___   *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   A  |O#O|  *");printf("\n");
            printf("*  | V | [6]   V  |###|  *");printf("\n");
            printf("*   OVO  ZXZ   A   NNN   *");printf("\n");
            printf("*  /N N===I    Too=NNN   *");printf("\n");
            printf("* //N N   I    Ioo=SSS   *");printf("\n");
            printf("*// ONO   O        RRR   *");printf("\n");
            printf("*P  UMU            S S   *");printf("\n");
            printf("*   U U            S S   *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D           SS SS  *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被砍死了！");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_kkkmofashi(){
    system("cls");
    string name="僵尸";
    int HP=120000,MAXHP=120000,ATK=400,DEF=0;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}    kkk魔法师*");printf("\n");
        printf("*   _/_  [6]        _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}   O   |C C| *");printf("\n");
        printf("*  | V | [6]   T   |MMM| *");printf("\n");
        printf("*   OVO  ZXZ   T    MMM  *");printf("\n");
        printf("*  /N N===I    T3oo=VVV=o*");printf("\n");
        printf("* //N N   I    T    SSS o*");printf("\n");
        printf("*// ONO   O    T    RRR 3*");printf("\n");
        printf("*P  UMU        T    S S  *");printf("\n");
        printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            SS SS *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.攻击   2.逃跑   3.技能  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("三十六计，走为上计！");
            system("cls");
            return false;
        }else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkk魔法师*");printf("\n");
            printf("*   _/_  [6]        _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   O   |C C| *");printf("\n");
            printf("*  | V | [6]   T   |MMM| *");printf("\n");
            printf("*   OVO  ZXZ   T    MMM  *");printf("\n");
            printf("*  /N N===I    T3oo=VVV=o*");printf("\n");
            printf("* //N N   I    T    SSS o*");printf("\n");
            printf("*// ONO   O    T    RRR 3*");printf("\n");
            printf("*P  UMU        T    S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkk魔法师*");printf("\n");
            printf("*   _/_  [6]        _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |   | {6}   O   |C C| *");printf("\n");
            printf("*  |   | [6]   T   |MMM| *");printf("\n");
            printf("*        ZXZ   T    MMM  *");printf("\n");
            printf("*  /   ===I    T3oo=VVV=o*");printf("\n");
            printf("* //      I    T    SSS o*");printf("\n");
            printf("*//       O    T    RRR 3*");printf("\n");
            printf("*P             T    S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkk魔法师*");printf("\n");
            printf("*                   _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*              T   |MMM| *");printf("\n");
            printf("*              T    MMM  *");printf("\n");
            printf("*   0          T3oo=VVV=o*");printf("\n");
            printf("*              T    SSS o*");printf("\n");
            printf("*              T    RRR 3*");printf("\n");
            printf("*              T    S S  *");printf("\n");
            printf("*                   S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkk魔法师*");printf("\n");
            printf("*                   _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*  0000        T   |MMM| *");printf("\n");
            printf("* 0    0       T    MMM  *");printf("\n");
            printf("* 0    0       T3oo=VVV=o*");printf("\n");
            printf("* 0    0       T    SSS o*");printf("\n");
            printf("* 0    0       T    RRR 3*");printf("\n");
            printf("*  0000        T    S S  *");printf("\n");
            printf("*                   S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("* 000000000000  kkk魔法师*");printf("\n");
            printf("*0            0     _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*0            0O   |C C| *");printf("\n");
            printf("*0            0T   |MMM| *");printf("\n");
            printf("*0            0T    MMM  *");printf("\n");
            printf("*0            0T3oo=VVV=o*");printf("\n");
            printf("*0            0T    SSS o*");printf("\n");
            printf("*0            0T    RRR 3*");printf("\n");
            printf("*0            0T    S S  *");printf("\n");
            printf("* 000000000000      S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得2500金币！500经验值！");
                Player.EXP+=500;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=2500;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkk魔法师*");printf("\n");
            printf("*   _/_  [6]        _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   O   |C C| *");printf("\n");
            printf("*  | V | [6]   T   |MMM| *");printf("\n");
            printf("*   OVO  ZXZ   T    MMM  *");printf("\n");
            printf("*  /N N===I    T3oo=VVV=o*");printf("\n");
            printf("* //N N   I    T    SSS o*");printf("\n");
            printf("*// ONO   O    T    RRR 3*");printf("\n");
            printf("*P  UMU        T    S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkk魔法师*");printf("\n");
            printf("*   _/_  [6]        _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |   | {6}   O   |C C| *");printf("\n");
            printf("*  |   | [6]   T   |MMM| *");printf("\n");
            printf("*        ZXZ   T    MMM  *");printf("\n");
            printf("*  /   ===I    T3oo=VVV=o*");printf("\n");
            printf("* //      I    T    SSS o*");printf("\n");
            printf("*//       O    T    RRR 3*");printf("\n");
            printf("*P             T    S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkk魔法师*");printf("\n");
            printf("*                   _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*              T   |MMM| *");printf("\n");
            printf("*              T    MMM  *");printf("\n");
            printf("*   0          T3oo=VVV=o*");printf("\n");
            printf("*              T    SSS o*");printf("\n");
            printf("*              T    RRR 3*");printf("\n");
            printf("*              T    S S  *");printf("\n");
            printf("*                   S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkk魔法师*");printf("\n");
            printf("*                   _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*  0000        T   |MMM| *");printf("\n");
            printf("* 0    0       T    MMM  *");printf("\n");
            printf("* 0    0       T3oo=VVV=o*");printf("\n");
            printf("* 0    0       T    SSS o*");printf("\n");
            printf("* 0    0       T    RRR 3*");printf("\n");
            printf("*  0000        T    S S  *");printf("\n");
            printf("*                   S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("* 000000000000  kkk魔法师*");printf("\n");
            printf("*0            0     _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*0            0O   |C C| *");printf("\n");
            printf("*0            0T   |MMM| *");printf("\n");
            printf("*0            0T    MMM  *");printf("\n");
            printf("*0            0T3oo=VVV=o*");printf("\n");
            printf("*0            0T    SSS o*");printf("\n");
            printf("*0            0T    RRR 3*");printf("\n");
            printf("*0            0T    S S  *");printf("\n");
            printf("* 000000000000      S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被烧死了！");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.你有%d张回血符！\n",Player.k1);
            printf("w.你有%d张凝神归元符！\n",Player.k2);
            printf("e.你有%d张左右互搏符！\n",Player.k3);
            printf("r.你有%d张亢龙有悔符！\n",Player.k4);
            printf("t.你有%d张酒神符！\n",Player.k5);
            printf("y.你有%d张夺魂符！\n",Player.k6);
            printf("u.你有%d张吸星大法符！\n",Player.k7);
            printf("i.你有%d张独孤九剑符！\n",Player.k8);
            printf("o.你有%d张钠水神功符！\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("感到一阵舒畅！HP+500");Player.HP+=500;}else print("你没有！");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("感觉一阵电流一般的快感流遍全身！HP+1000");Player.HP+=1000;}else print("你没有！");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("你的双手能使用不同的招式！伤害翻倍！");Player.ATK*=2;}else print("你没有！");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("掌风一下子呼了出去，天崩地裂！");sd=rand()%50000+1;HP-=sd;}else print("你没有！");break;
                case 't':if (Player.k5>=1){Player.k5--;print("一股巨大的力量冲了出来！");sd=rand()%80000+20000;HP-=sd;}else print("你没有！");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("夺魂！！！");if ((rand()%21)%10==0)HP=0;}else print("你没有！");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("看我神功！！！！");HP-=500;Player.HP+=500;}else print("你没有！");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("独孤九剑！秒天秒地！");Player.ATK*=9;};break;
                case 'o':if (Player.k9>=1){Player.k9--;print("钠水神功，绽放激烈的火花！");sd=rand();HP-=sd;}else print("你没有！");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkk魔法师*");printf("\n");
            printf("*   _/_  [6]        _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   O   |C C| *");printf("\n");
            printf("*  | V | [6]   T   |MMM| *");printf("\n");
            printf("*   OVO  ZXZ   T    MMM  *");printf("\n");
            printf("*  /N N===I    T3oo=VVV=o*");printf("\n");
            printf("* //N N   I    T    SSS o*");printf("\n");
            printf("*// ONO   O    T    RRR 3*");printf("\n");
            printf("*P  UMU        T    S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkk魔法师*");printf("\n");
            printf("*   _/_  [6]        _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |   | {6}   O   |C C| *");printf("\n");
            printf("*  |   | [6]   T   |MMM| *");printf("\n");
            printf("*        ZXZ   T    MMM  *");printf("\n");
            printf("*  /   ===I    T3oo=VVV=o*");printf("\n");
            printf("* //      I    T    SSS o*");printf("\n");
            printf("*//       O    T    RRR 3*");printf("\n");
            printf("*P             T    S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkk魔法师*");printf("\n");
            printf("*                   _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*              T   |MMM| *");printf("\n");
            printf("*              T    MMM  *");printf("\n");
            printf("*   0          T3oo=VVV=o*");printf("\n");
            printf("*              T    SSS o*");printf("\n");
            printf("*              T    RRR 3*");printf("\n");
            printf("*              T    S S  *");printf("\n");
            printf("*                   S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkk魔法师*");printf("\n");
            printf("*                   _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*  0000        T   |MMM| *");printf("\n");
            printf("* 0    0       T    MMM  *");printf("\n");
            printf("* 0    0       T3oo=VVV=o*");printf("\n");
            printf("* 0    0       T    SSS o*");printf("\n");
            printf("* 0    0       T    RRR 3*");printf("\n");
            printf("*  0000        T    S S  *");printf("\n");
            printf("*                   S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("* 000000000000  kkk魔法师*");printf("\n");
            printf("*0            0     _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*0            0O   |C C| *");printf("\n");
            printf("*0            0T   |MMM| *");printf("\n");
            printf("*0            0T    MMM  *");printf("\n");
            printf("*0            0T3oo=VVV=o*");printf("\n");
            printf("*0            0T    SSS o*");printf("\n");
            printf("*0            0T    RRR 3*");printf("\n");
            printf("*0            0T    S S  *");printf("\n");
            printf("* 000000000000      S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得2100金币！400经验值！");
                Player.EXP+=400;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=2100;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkk魔法师*");printf("\n");
            printf("*   _/_  [6]        _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}   O   |C C| *");printf("\n");
            printf("*  | V | [6]   T   |MMM| *");printf("\n");
            printf("*   OVO  ZXZ   T    MMM  *");printf("\n");
            printf("*  /N N===I    T3oo=VVV=o*");printf("\n");
            printf("* //N N   I    T    SSS o*");printf("\n");
            printf("*// ONO   O    T    RRR 3*");printf("\n");
            printf("*P  UMU        T    S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkk魔法师*");printf("\n");
            printf("*   _/_  [6]        _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |   | {6}   O   |C C| *");printf("\n");
            printf("*  |   | [6]   T   |MMM| *");printf("\n");
            printf("*        ZXZ   T    MMM  *");printf("\n");
            printf("*  /   ===I    T3oo=VVV=o*");printf("\n");
            printf("* //      I    T    SSS o*");printf("\n");
            printf("*//       O    T    RRR 3*");printf("\n");
            printf("*P             T    S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkk魔法师*");printf("\n");
            printf("*                   _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*              T   |MMM| *");printf("\n");
            printf("*              T    MMM  *");printf("\n");
            printf("*   0          T3oo=VVV=o*");printf("\n");
            printf("*              T    SSS o*");printf("\n");
            printf("*              T    RRR 3*");printf("\n");
            printf("*              T    S S  *");printf("\n");
            printf("*                   S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*               kkk魔法师*");printf("\n");
            printf("*                   _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*              O   |C C| *");printf("\n");
            printf("*  0000        T   |MMM| *");printf("\n");
            printf("* 0    0       T    MMM  *");printf("\n");
            printf("* 0    0       T3oo=VVV=o*");printf("\n");
            printf("* 0    0       T    SSS o*");printf("\n");
            printf("* 0    0       T    RRR 3*");printf("\n");
            printf("*  0000        T    S S  *");printf("\n");
            printf("*                   S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("* 000000000000  kkk魔法师*");printf("\n");
            printf("*0            0     _A_  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*0            0O   |C C| *");printf("\n");
            printf("*0            0T   |MMM| *");printf("\n");
            printf("*0            0T    MMM  *");printf("\n");
            printf("*0            0T3oo=VVV=o*");printf("\n");
            printf("*0            0T    SSS o*");printf("\n");
            printf("*0            0T    RRR 3*");printf("\n");
            printf("*0            0T    S S  *");printf("\n");
            printf("* 000000000000      S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*                  SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被冻死了！");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_cike(){
    system("cls");
    string name="僵尸";
    int HP=60000,MAXHP=60000,ATK=800,DEF=1;
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}      kkk刺客*");printf("\n");
        printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}      | $ $ |*");printf("\n");
        printf("*  | V | [6]     -+| V | *");printf("\n");
        printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
        printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
        printf("* //N N   I   -+    SSS o*");printf("\n");
        printf("*// ONO   O      -+ RRR-+*");printf("\n");
        printf("*P  UMU             S S  *");printf("\n");
        printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            SS SS *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.攻击   2.逃跑   3.技能  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("三十六计，走为上计！");
            system("cls");
            return false;
        }
        else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | 1 | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UM1             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* /1N 1   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O 1| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N==1I    +3oo=OOO=o*");printf("\n");
            printf("* //N 1   I   -+    SSS o*");printf("\n");
            printf("*// O1O   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |1 1| {6}      | $ $ |*");printf("\n");
            printf("*  1 V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N1N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /1 N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得1000金币！4000经验值！");
                Player.EXP+=4000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=1000;
                system("cls");
                return true;
            }
            sd-=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | 1 | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UM1             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* /1N 1   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O 1| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N==1I    +3oo=OOO=o*");printf("\n");
            printf("* //N 1   I   -+    SSS o*");printf("\n");
            printf("*// O1O   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |1 1| {6}      | $ $ |*");printf("\n");
            printf("*  1 V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N1N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /1 N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被弄死了！");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.你有%d张回血符！\n",Player.k1);
            printf("w.你有%d张凝神归元符！\n",Player.k2);
            printf("e.你有%d张左右互搏符！\n",Player.k3);
            printf("r.你有%d张亢龙有悔符！\n",Player.k4);
            printf("t.你有%d张酒神符！\n",Player.k5);
            printf("y.你有%d张夺魂符！\n",Player.k6);
            printf("u.你有%d张吸星大法符！\n",Player.k7);
            printf("i.你有%d张独孤九剑符！\n",Player.k8);
            printf("o.你有%d张钠水神功符！\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("感到一阵舒畅！HP+500");Player.HP+=500;}else print("你没有！");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("感觉一阵电流一般的快感流遍全身！HP+1000");Player.HP+=1000;}else print("你没有！");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("你的双手能使用不同的招式！伤害翻倍！");Player.ATK*=2;}else print("你没有！");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("掌风一下子呼了出去，天崩地裂！");sd=rand()%50000+1;HP-=sd;}else print("你没有！");break;
                case 't':if (Player.k5>=1){Player.k5--;print("一股巨大的力量冲了出来！");sd=rand()%80000+20000;HP-=sd;}else print("你没有！");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("夺魂！！！");if ((rand()%21)%10==0)HP=0;}else print("你没有！");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("看我神功！！！！");HP-=500;Player.HP+=500;}else print("你没有！");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("独孤九剑！秒天秒地！");Player.ATK*=9;};break;
                case 'o':if (Player.k9>=1){Player.k9--;print("钠水神功，绽放激烈的火花！");sd=rand();HP-=sd;}else print("你没有！");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | 1 | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UM1             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* /1N 1   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O 1| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N==1I    +3oo=OOO=o*");printf("\n");
            printf("* //N 1   I   -+    SSS o*");printf("\n");
            printf("*// O1O   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |1 1| {6}      | $ $ |*");printf("\n");
            printf("*  1 V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N1N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /1 N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得300金币！8000经验值！");
                Player.EXP+=8000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=300;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | 1 | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UM1             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* /1N 1   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O 1| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N==1I    +3oo=OOO=o*");printf("\n");
            printf("* //N 1   I   -+    SSS o*");printf("\n");
            printf("*// O1O   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |1 1| {6}      | $ $ |*");printf("\n");
            printf("*  1 V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /N N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N1N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}      kkk刺客*");printf("\n");
            printf("*   _/_  [6]  -+    ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}      | $ $ |*");printf("\n");
            printf("*  | V | [6]     -+| V | *");printf("\n");
            printf("*   OVO  ZXZ   |    CVD  *");printf("\n");
            printf("*  /1 N===I    +3oo=OOO=o*");printf("\n");
            printf("* //N N   I   -+    SSS o*");printf("\n");
            printf("*// ONO   O      -+ RRR-+*");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U       -+    S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被弄死了！");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_kkkk(){
    system("cls");
    string name="僵尸";
    int HP=300000,MAXHP=300000,ATK=200,DEF=10;
    print("你看见kkksc06冲了过来，你定睛一看，是假的！");
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}    kkkksc06 *");printf("\n");
        printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6}       |X X| *");printf("\n");
        printf("*  | V | [6]       | O | *");printf("\n");
        printf("*   OVO  ZXZ        CVD  *");printf("\n");
        printf("*  /N N===I     3oo=OOO  *");printf("\n");
        printf("* //N N   I     3oo=SSS  *");printf("\n");
        printf("*// ONO   O         RRR  *");printf("\n");
        printf("*P  UMU             S S  *");printf("\n");
        printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            SS SS *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.攻击   2.逃跑   3.技能  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("三十六计，走为上计！");
            system("cls");
            return false;
        }else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得10000金币！1000经验值！");
                Player.EXP+=1000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=10000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被假死了！");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.你有%d张回血符！\n",Player.k1);
            printf("w.你有%d张凝神归元符！\n",Player.k2);
            printf("e.你有%d张左右互搏符！\n",Player.k3);
            printf("r.你有%d张亢龙有悔符！\n",Player.k4);
            printf("t.你有%d张酒神符！\n",Player.k5);
            printf("y.你有%d张夺魂符！\n",Player.k6);
            printf("u.你有%d张吸星大法符！\n",Player.k7);
            printf("i.你有%d张独孤九剑符！\n",Player.k8);
            printf("o.你有%d张钠水神功符！\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("感到一阵舒畅！HP+500");Player.HP+=500;}else print("你没有！");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("感觉一阵电流一般的快感流遍全身！HP+1000");Player.HP+=1000;}else print("你没有！");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("你的双手能使用不同的招式！伤害翻倍！");Player.ATK*=2;}else print("你没有！");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("掌风一下子呼了出去，天崩地裂！");sd=rand()%50000+1;HP-=sd;}else print("你没有！");break;
                case 't':if (Player.k5>=1){Player.k5--;print("一股巨大的力量冲了出来！");sd=rand()%80000+20000;HP-=sd;}else print("你没有！");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("夺魂！！！");if ((rand()%21)%10==0)HP=0;}else print("你没有！");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("看我神功！！！！");HP-=500;Player.HP+=500;}else print("你没有！");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("独孤九剑！秒天秒地！");Player.ATK*=9;};break;
                case 'o':if (Player.k9>=1){Player.k9--;print("钠水神功，绽放激烈的火花！");sd=rand();HP-=sd;}else print("你没有！");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得10000金币！1000经验值！");
                Player.EXP+=1000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=10000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I     3oo=OOO  *");printf("\n");
            printf("* //N N   I    3oo =SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}    kkkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6}       |X X| *");printf("\n");
            printf("*  | V | [6]       | O | *");printf("\n");
            printf("*   OVO  ZXZ        CVD  *");printf("\n");
            printf("*  /N N===I    3oo =OOO  *");printf("\n");
            printf("* //N N   I     3oo=SSS  *");printf("\n");
            printf("*// ONO   O         RRR  *");printf("\n");
            printf("*P  UMU             S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (Player.HP<=0){
                print("你被假死了！");
                exit(1);
            }
        }
        system("cls");
    }
}
bool fight_to_KKKKK(){
    system("cls");
    string name="僵尸";
    int HP=1000000,MAXHP=1000000,ATK=999999,DEF=100;
    print("面包是我的！你别想救走！！！");printf("\n");
    print("哼哼！你这蒟弱！！");printf("\n");
    print("永远膜拜我吧！！！");printf("\n");
    print("kkksc06大魔王拿出了巨强牛神电磁炮！");printf("\n");
    print(" ");
    while (1){
        printf("**************************");printf("\n");
        printf("*     >  {=}     kkksc06 *");printf("\n");
        printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
        printf("*  |O O| {6} +==+  |E E| *");printf("\n");
        printf("*  | V | [6] |  |  | V | *");printf("\n");
        printf("*   OVO  ZXZ   强巨 HHH  *");printf("\n");
        printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
        printf("* //N N   I    牛神  H  o*");printf("\n");
        printf("*// ONO   O  |  |   HHH 3*");printf("\n");
        printf("*P  UMU      +==+   S S  *");printf("\n");
        printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
        printf("*   D D            SS SS *");printf("\n");
        printf("**************************");printf("\n");
        printf("1.攻击   2.逃跑   3.技能  ");printf("\n");
        qwe=_getch();
        if (qwe=='2'){
            system("cls");
            print("我不救面包了，拜拜！");
            system("cls");
            return false;
        }else if (qwe=='1'){
            system("cls");
            int sd;
            sd=Player.ATK-DEF+(rand()%100);
            HP-=sd;
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+ =======*");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   强巨 HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    牛神  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   强巨 HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    牛神  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U       ======S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   强巨 HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    牛神  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            ======*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ  =======HH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    牛神  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   强巨 HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    牛神  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +=========  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得10000金币！1000经验值！然而面包不在这里！！");
                Player.EXP+=1000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=10000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            for (int i=1;i<=10;++i)
            print("kkksc06：蒟蒻！！！纳命来！！造成");
            printf("%d",sd);
            print("点伤害！");
            if (Player.HP<=0){
                print("你被打死了！");
                exit(1);
            }
        }else if (qwe=='3'){
            int sd;
            system("cls");
            printf("q.你有%d张回血符！\n",Player.k1);
            printf("w.你有%d张凝神归元符！\n",Player.k2);
            printf("e.你有%d张左右互搏符！\n",Player.k3);
            printf("r.你有%d张亢龙有悔符！\n",Player.k4);
            printf("t.你有%d张酒神符！\n",Player.k5);
            printf("y.你有%d张夺魂符！\n",Player.k6);
            printf("u.你有%d张吸星大法符！\n",Player.k7);
            printf("i.你有%d张独孤九剑符！\n",Player.k8);
            printf("o.你有%d张钠水神功符！\n",Player.k9);
            qwe=_getch();
            switch (qwe){
                case 'q':if (Player.k1>=1){Player.k1--;print("感到一阵舒畅！HP+500");Player.HP+=500;}else print("你没有！");break;
                case 'w':if (Player.k2>=1){Player.k2--;print("感觉一阵电流一般的快感流遍全身！HP+1000");Player.HP+=1000;}else print("你没有！");break;
                case 'e':if (Player.k3>=1){Player.k3--;print("你的双手能使用不同的招式！伤害翻倍！");Player.ATK*=2;}else print("你没有！");break;
                case 'r':if (Player.k4>=1){Player.k4--;print("掌风一下子呼了出去，天崩地裂！");sd=rand()%50000+1;HP-=sd;}else print("你没有！");break;
                case 't':if (Player.k5>=1){Player.k5--;print("一股巨大的力量冲了出来！");sd=rand()%80000+20000;HP-=sd;}else print("你没有！");break;
                case 'y':if (Player.k6>=1){Player.k6--;print("夺魂！！！");if ((rand()%21)%10==0)HP=0;}else print("你没有！");break;
                case 'u':if (Player.k7>=1){Player.k7--;print("看我神功！！！！");HP-=500;Player.HP+=500;}else print("你没有！");break;
                case 'i':if (Player.k8>=1){Player.k8--;print("独孤九剑！秒天秒地！");Player.ATK*=9;};break;
                case 'o':if (Player.k9>=1){Player.k9--;print("钠水神功，绽放激烈的火花！");sd=rand();HP-=sd;}else print("你没有！");break;
            }
            system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+ =======*");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   强巨 HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    牛神  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   强巨 HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    牛神  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U       ======S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   强巨 HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    牛神  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            ======*");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ  =======HH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    牛神  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +==+   S S  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            printf("**************************");printf("\n");
            printf("*     >  {=}     kkksc06 *");printf("\n");
            printf("*   _/_  [6]        ___  *敌方血量：%d/%d",HP,MAXHP);printf("\n");
            printf("*  |O O| {6} +==+  |E E| *");printf("\n");
            printf("*  | V | [6] |  |  | V | *");printf("\n");
            printf("*   OVO  ZXZ   强巨 HHH  *");printf("\n");
            printf("*  /N N===I   O==ooo=H=oo*");printf("\n");
            printf("* //N N   I    牛神  H  o*");printf("\n");
            printf("*// ONO   O  |  |   HHH 3*");printf("\n");
            printf("*P  UMU      +=========  *");printf("\n");
            printf("*   U U             S S  *我方血量：%d/%d",Player.HP,Player.MAXHP);printf("\n");
            printf("*   D D            SS SS *");printf("\n");
            printf("**************************");printf("\n");
            printf("1.攻击   2.逃跑   3.技能  ");printf("\n");printf("\n");Sleep(200);system("cls");
            if (HP<=0){
                print("你赢了！获得10000金币！1000经验值！然而面包不在这里！！");
                Player.EXP+=1000000;
                lvup();Player.HP+=378;if (Player.HP>Player.MAXHP) Player.HP=Player.MAXHP;
                Player.Money+=100000;
                system("cls");
                return true;
            }
            sd=ATK-Player.DEF+(rand()%100);
            Player.HP-=sd;
            for (int i=1;i<=10;++i)
            print("kkksc06：面包是我的!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!v!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
            printf("%d",sd);
            print("点伤害！");
            if (Player.HP<=0){
                print("你被打死了！");
                exit(1);
            }
        }
        system("cls");
    }
}
int main(){
    print("洛谷王国的超级可爱的面包姐姐被kkksc06大魔王抓走啦！勇士！为了面包夹绿鸟！请救出面包姐姐吧！！");
    system("cls");
    srand(time(NULL));
    Player.HP=1000;Player.MAXHP=1000;
    Player.LV=1;Player.EXP=0;Player.MAXEXP=500;
    Player.ATK=200;Player.DEF=5;
    Player.Money=100;
    for (int i=1;i<=4;++i){
        cout<<"加载中|";
        Sleep(200);
        system("cls");
        cout<<"加载中/";
        Sleep(200);
        system("cls");
        cout<<"加载中-";
        Sleep(200);
        system("cls");
        cout<<"加载中\\";
        Sleep(200);
        system("cls");
    }
    cout<<"【W】【A】【S】【D】移动！！【E】查看状态！"<<endl;
    Sleep(1000);
    cout<<"商店请在门口（|）处点击【F】进入！！【B】使用道具!"<<endl;
    Sleep(1000);
    cout<<"切换地图请在门口最深处点击【F】！【Q】查看你的符！"<<endl;
    Sleep(4000);
    system("cls");
    go(0);
    while (1){
        cout<<mapname[where]<<endl;
        for (int i=0;i<20;++i)
            cout<<maps[where][i]<<endl;
        printf("HP:   %d  /  %d",Player.HP,Player.MAXHP);
        qwe=_getch();
        system("cls");
        switch (qwe){
            case 'w':if (maps[where][x-1][y]==' '){swap(maps[where][x-1][y],maps[where][x][y]);x-=1;};break;
            case 'a':if (maps[where][x][y-1]==' '){swap(maps[where][x][y-1],maps[where][x][y]);y-=1;};break;
            case 's':if (maps[where][x+1][y]==' '){swap(maps[where][x+1][y],maps[where][x][y]);x+=1;};break;
            case 'd':if (maps[where][x][y+1]==' '){swap(maps[where][x][y+1],maps[where][x][y]);y+=1;};break;
            case 'f':{
                switch (where){
                    case 0:{
                        if (x==2&&y==4)
                            shop1();
                        else if (x==6&&y==4)
                            shop2();
                        else if (x==10&&y==4)
                            shop3();
                        else if (x==7&&y==19)
                            go(1);
                        else if (x==17&&y==15)
                            switch (rand()%3+1){
                                case 1:fight_to_jiangshi();break;
                                case 2:fight_to_kulipa();break;
                                case 3:fight_to_sheshou();break;
                            }
                        else if (x==18&&y==15){
                            fight_to_jiangshiwang();
                        }
                        break;
                    }
                    case 1:{
                        if (x==7&&y==0)
                            go(0);
                        else if (x==19&&y==16)
                            go(2);
                        else if (x==10&&y==9){
                            fight_to_kkk();
                        }
                        break;
                    }
                    case 2:{
                        if (x==0&&y==16)
                            go(1);
                        else if (x==9&&y==11)
                            sp();
                        else if (x==7&&y==0)
                            go(3);
                        break;
                    }
                    case 3:{
                        if (x==7&&y==19)
                            go(2);
                        else if (x==1&&y==1)
                            shop4();
                        else if (x==11&&y==0)
                            go(4);
                        if (x==17&&y==15)
                            switch(rand()%3+1){
                                case 1:fight_to_kkkshiwei();break;
                                case 2:fight_to_kkkmofashi();break;
                                case 3:fight_to_cike();break;
                            }
                        if (x==18&&y==15){
                            fight_to_kkkk();
                        }
                        break;
                    }
                    case 4:{
                        if (x==11&&y==19)
                            go(3);
                        else if (x==10&&y==1){
                            fight_to_KKKKK();
                        }
                        break;
                    }
                }
                break;
            }
            case 'e':{
                system("cls");
                printf("你有%d枚金币！\n",Player.Money);
                printf("你现在是%d级！\n",Player.LV);
                printf("你现在经验是%d/%d\n",Player.EXP,Player.MAXEXP);
                printf("你攻击力是%d\n",Player.ATK);
                printf("你防御力是%d\n",Player.DEF);
                qwe=_getch();
                system("cls");
                break;
            }
            case 'b':{
                system("cls");
                printf("1.大补丸  %d\n",Player.q1);
                printf("2.剑气纵横丹  %d\n",Player.q2);
                printf("3.金刚仙丹  %d\n",Player.q3);
                printf("4.肥宅快乐丹  %d\n",Player.q4);
                printf("5.鹤顶红  %d\n",Player.q5);
                printf("6.生铁长剑  %d\n",Player.s1);
                printf("7.精钢长刀  %d\n",Player.s2);
                printf("8.劈山斧  %d\n",Player.s3);
                printf("9.夺魂重枪  %d\n",Player.s4);
                printf("a.石中神剑  %d\n",Player.s5);
                printf("b.护心镜  %d\n",Player.d1);
                printf("c.铁锁甲  %d\n",Player.d2);
                printf("d.陨铁神盾  %d\n",Player.d3);
                printf("e.坦克皮  %d\n",Player.d4);
                printf("f.风王结界  %d\n",Player.d5);
                qwe=_getch();
                switch(qwe){
                    case '1':{
                        if (Player.q1>=1){
                            Player.q1--;
                            Player.HP+=200;
                            print("你回了200点HP");
                            if (Player.HP>Player.MAXHP)
                                Player.HP=Player.MAXHP;
                            system("cls");
                        }
                        break;
                    }
                    case '2':{
                        if (Player.q2>=1){
                            Player.q2--;
                            Player.HP+=200;
                            Player.ATK+=20;
                            print("你觉得自己充满力气，攻击力上升20点");
                            system("cls");
                        }
                        break;
                    }
                    case '3':{
                        if (Player.q3>=1){
                            Player.q3--;
                            Player.HP+=200;
                            Player.DEF+=5;
                            print("你觉得自己刀枪不入，防御力上升5点");
                            system("cls");
                        }
                        break;
                    }
                    case '4':{
                        if (Player.q4>=1){
                            Player.q4--;
                            Player.HP+=200;
                            Player.MAXHP+=60;
                            print("你觉得自己还能再干！最大生命值上升60点！");
                            system("cls");
                        }
                        break;
                    }
                    case '5':{
                        if (Player.q5>=1){
                            Player.HP+=200;
                            print("你缓缓服下鹤顶红！");printf("\n");
                            print("你觉得自己时日不多了！");printf("\n");
                            print("真是的！！");printf("\n");
                            print("你干什么要吃这种东西呢？");printf("\n");
                            print("明明都和你说过了有毒！");printf("\n");
                            print("你这个大佬就是不听！");printf("\n");
                            print("你快死了！");printf("\n");
                            print("呵呵呵");printf("\n");
                            print("exit(0)");printf("\n");
                            print("然而你并没有死，只是浪费了500金币而已。");printf("\n");
                        }
                        break;
                    }
                    case '6':{
                        if (Player.s1>=1){
                            Player.ATK+=100;
                            Player.s1--;
                        }
                        break;
                    }
                    case '7':{
                        if (Player.s2>=1){
                            Player.ATK+=200;
                            Player.s2--;
                        }
                        break;
                    }
                    case '8':{
                        if (Player.s3>=1){
                            Player.ATK+=300;
                            Player.s3--;
                        }
                        break;
                    }
                    case '9':{
                        if (Player.s4>=1){
                            Player.ATK+=500;
                            Player.s4--;
                        }
                        break;
                    }
                    case 'a':{
                        if (Player.s5>=1){
                            Player.ATK+=1000;
                            Player.s5--;
                        }
                        break;
                    }
                    case 'b':{
                        if (Player.d1>=1){
                            Player.DEF+=10;
                            Player.d1--;
                        }
                        break;
                    }
                    case 'c':{
                        if (Player.d2>=1){
                            Player.DEF+=20;
                            Player.d2--;
                        }
                        break;
                    }
                    case 'd':{
                        if (Player.d3>=1){
                            Player.DEF+=30;
                            Player.d3--;
                        }
                        break;
                    }
                    case 'e':{
                        if (Player.d4>=1){
                            Player.DEF+=40;
                            Player.d4--;
                        }
                        break;
                    }
                    case 'f':{
                        if (Player.d5>=1){
                            Player.DEF+=100;
                            Player.d5--;
                        }
                        break;
                    }
                }
                system("cls");
                break;
            }
            case 'q':{
                system("cls");
                printf("你有%d张回血符！\n",Player.k1);
                printf("你有%d张凝神归元符！\n",Player.k2);
                printf("你有%d张左右互搏符！\n",Player.k3);
                printf("你有%d张亢龙有悔符！\n",Player.k4);
                printf("你有%d张酒神符！\n",Player.k5);
                printf("你有%d张夺魂符！\n",Player.k6);
                printf("你有%d张吸星大法符！\n",Player.k7);
                printf("你有%d张独孤九剑符！\n",Player.k8);
                printf("你有%d张钠水神功符！\n",Player.k9);
                qwe=_getch();
                system("cls");
                break;
            }
        }
    }
}