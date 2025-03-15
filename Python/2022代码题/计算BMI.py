h = float(input("请输入你的身高（单位：m）"))
____ = float(input("请输入你的体重（单位：kg）"))
BMI = w/h**2          #计算相应的BMI值
BMI = round(BMI,1)     #对变量BMI的值进行四舍五入后，保留1位小数
print("你的身体质量指数是：",BMI)
if _____________
    print("BMI等级：低体重")
elif BMI<23.7:
    print("BMI等级：正常")
elif BMI>26.5:
    print("BMI等级：超重")
else:
    print("BMI等级：肥胖")
