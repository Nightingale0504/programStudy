s = input("请输入后六位车牌号：")
n = 6                       #车牌号长度为6
x = s[n-1]                  #第一位是s[0]，取车牌号s的第n位
while x<"0" _____ x>"9":    #X是字母就向前循环处理
    n = n-1                 #取位向前移1位
    x = s[n-1]              #取车牌号的第n个符号
if int(x)%5 ==1:
    print("星期一限行")
elif int(x)%5 = 2:
    _____
elif int(x)%5 == 3:
    print("星期三限行")
elif int(x)%5 == 4:
    print("星期四限行")
elif:
    print("星期五限行")
