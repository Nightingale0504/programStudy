from cgi import print_form
from bilibili_api import login,user,Credential
import asyncio
import pickle
async def main() -> None:
    cookieFile="cookie.pkl"
    sessdataFile="sessdata.pkl"
    ctx=Credential()
    try:
        with open(cookieFile,"rb") as file:
            tmp=pickle.load(file)
            ctx=Credential(sessdata=tmp.sessdata,bili_jct=tmp.bili_jct,buvid3=tmp.buvid3,dedeuserid=tmp.dedeuserid,ac_time_value=tmp.ac_time_value)
    except FileNotFoundError:
        pass
    vaild=await ctx.check_valid()
    if vaild is not True:
        print("请登录：")
        tmp=login.login_with_qrcode_term()
        ctx=Credential(sessdata=tmp.sessdata,bili_jct=tmp.bili_jct,buvid3=tmp.buvid3,dedeuserid=tmp.dedeuserid,ac_time_value=tmp.ac_time_value)
    try:
        ctx.raise_for_no_bili_jct()
        ctx.raise_for_no_ac_time_value()
        ctx.raise_for_no_buvid3()
        ctx.raise_for_no_dedeuserid()
        ctx.raise_for_no_sessdata()
    except:
        print("登陆失败...")
        exit()
    needRefresh=await ctx.check_refresh()
    if needRefresh:
        await ctx.refresh()
    info=await user.get_self_info(credential=ctx)
    print("欢迎, ",info['name'],"!")
    with open(cookieFile,"wb") as file:
        pickle.dump(ctx,file)
    with open(sessdataFile,"w") as file:
        file.write(ctx.get_cookies()['SESSDATA'])
if __name__=="__main__":
    asyncio.run(main())