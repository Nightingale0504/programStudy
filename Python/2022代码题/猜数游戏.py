import random                    #导入random模块
num = random.randint(1,100)       #利用randint()函数生成1~100之间随机数
print("***********游戏开始***********")
for i in range(1,5):        #通过循环控制游戏次数
    n =int(input("请输入你猜的数："))     #用户输入猜的数
    if n == num:
        print("恭喜你，猜对了！")
        break             #直接退出循环
    elif n < num:
        print("猜小了！")
    else:
        print("猜大了！")
print("***********游戏结束***********")
