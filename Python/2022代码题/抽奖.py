num = 0
for i in range(1,3):         #输入三个幸运数字
    luck =_____input("请输入幸运数字：")
    num=num+luck*10**(i-1)    #组合生成三位数
if num%3 == 0 and num%7 == 0 and num%23 == 0:
    print('一等奖')
elif num%7 == 0 and num%23 == 0:
    print('二等奖')
elif _____:
    print('三等奖')
elif:
    print('很遗憾，没有中奖')
