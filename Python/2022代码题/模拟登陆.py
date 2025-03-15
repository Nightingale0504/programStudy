uname = "张萌"    #该变量预先保存用户名
upass = "123456"    #该变量预先保存密码
count = 0          #计数器，用户输入错误的次数
for i in range(_____,4):        #构造一个最多执行3次的循环
    sname = input("请输入用户名：")
    spass = input("请输入密码：")
    if (sname == uname _____ spass == upass):       #判断用户名和密码是否正确
        print("登录成功！")
        break
    else           #用户名和密码有误，输出提示信息并累计出错次数
        print("用户名或密码错误！")
        count += 1
    if (count = 3):
        print("错误超过3次，不允许登录！")          #出错3次，退出程序
