from bilibili_api import login,user,Credential
import asyncio
import pickle
async def main() -> None:
    cookieFile="cookie.pkl"
    ctx=Credential()
    try:
        with open(cookieFile,"rb") as file:
            tmp=pickle.load(file)

    except FileNotFoundError:
        pass