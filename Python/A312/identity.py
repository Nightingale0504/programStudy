def substr(a:str,b:int,c:int):
    return a[b:b+c]
idNum=input("请输入身份证号: ")
yearOfBirth=substr(idNum,6,4)
monthOfBirth=substr(idNum,10,2)
dayOfBirth=substr(idNum,12,2)
print(f"{yearOfBirth} 年 {monthOfBirth} 月 {dayOfBirth} 日")