# include models
from feature_functions import *

# data storage define
#   dishes data storage define
dish_name_list=["红烧带鱼", "鱼香肉丝", "时令蔬菜"]
dish_price_list=[38.0, 28.0, 10.0]
dish_like_list=[0, 0, 0]

#   order data storage define
order_name_list=[]
order_dish_message_list=[]
order_time_list=[]
order_address_list=[]
order_state_list=[]
order_total_price_list=[]

# main system functions define
def print_order():
    print("序号  订餐人    餐品信息                     送餐时间 送餐地址                                                              总金额          订单状态")
    for i in range(len(order_name_list)):
        print(i+1, end="")
        print(" "*(6-display_len(str(i))), end="")
        print(order_name_list[i], end="")
        print(" "*(10-display_len(order_name_list[i])), end="")
        print(order_dish_message_list[i], end="")
        print(" "*(29-display_len(order_dish_message_list[i])), end="")
        print(order_time_list[i], "点", end="")
        print(" "*(6-display_len(str(order_time_list[i]))), end="")
        print(order_address_list[i], end="")
        print(" "*(70-display_len(order_address_list[i])), end="")
        print(order_total_price_list[i], "元", end="")
        print(" "*(13-display_len(str(order_total_price_list[i]))), end="")
        print(state_parse(order_state_list[i]))

def print_dish():
    print("序号  菜品名称    单价          点赞数")
    for i in range(len(dish_name_list)):
        print(i+1, end="")
        print(" "*(6-display_len(str(i))), end="")
        print(dish_name_list[i], end="")
        print(" "*(12-display_len(dish_name_list[i])), end="")
        print(dish_price_list[i], "元", end="")
        print(" "*(14-display_len(str(dish_price_list[i]))), end="")
        print(dish_like_list[i])

def order():
    print("*"*5, "我要订餐", "*"*5)
    order_name=input("请输入订餐人姓名: ")
    order_name_list.append(order_name)
    order_dish_id=-1
    while not 0<=order_dish_id-1<=len(dish_name_list):
        print_dish()
        order_dish_id=int(input("请输入您要点的菜品编号: "))
        if not 0<=order_dish_id-1<=len(dish_name_list):
            print("菜品不存在, 请重新输入")
    order_dish_num=int(input("请输入您需要的份数: "))
    order_time=-1
    while not 10<=order_time<=20:
        order_time=int(input("请输入送餐时间( 每日 10:00 至 20:00 间整点送餐 ):"))
        if not 10<=order_time<=20:
            print("您输入的送餐时间我们无法配送, 请重新输入")
    order_address=input("请输入送餐地址: ")
    order_address_list.append(order_address)
    print("订餐成功! ")
    print("您定的是:", dish_name_list[order_dish_id-1], order_dish_num, "份")
    order_dish_message_list.append(dish_name_list[order_dish_id-1]+" "+str(order_dish_num)+" 份")
    print("送餐时间:", order_time, "点")
    order_time_list.append(order_time)
    dish_cost=order_dish_num*dish_price_list[order_dish_id-1]
    delivery_cost=0.0 if dish_cost>=50 else 5.0
    total_cost=dish_cost+delivery_cost
    print("餐费:", dish_cost, "元", ", 配送费:", delivery_cost, "元", ", 总计:", total_cost, "元")
    order_total_price_list.append(total_cost)
    order_state_list.append(0)
    return

def check_package():
    print("*"*5, "查看餐袋", "*"*5)
    print_order()
    return

def confirm_receipt_of_order():
    print("*"*5, "签收订单", "*"*5)
    print_order()
    order_id=-1
    while not 0<=order_id<=len(order_name_list):
        order_id=int(input("请输入要签收的订单号: "))
        if not 0<=order_id<=len(order_name_list):
            print("订单不存在, 请重新输入! ")
    if order_state_list[order_id-1]!=9 and order_state_list[order_id-1]!=-1:
        confirm="2147483648"
        while not (confirm=="y" or confirm=="n" or confirm==""):
            confirm=input("是否确认签收: (y) / n")
            if not (confirm=="y" or confirm=="n" or confirm==""):
                print("输入有误, 请重新输入! ")
        if confirm=="y" or confirm=="":
            order_state_list[order_id-1]=9
            print("订单签收成功! ")
        else:
            print("已取消签收订单! ")
    elif order_state_list[order_id-1]==9:
        print("订单已签收, 无法再次签收! ")
    else:
        print("订单已取消, 无法签收! ")
    return

def remove_order():
    print("*"*5, "删除订单", "*"*5)
    print_order()
    order_id=-1
    while not 0<=order_id<=len(order_name_list):
        order_id=int(input("请输入要签收的订单号: "))
        if not 0<=order_id<=len(order_name_list):
            print("订单不存在, 请重新输入! ")
    if not (order_state_list[order_id-1]==9 or order_state_list[order_id-1]==-1):
        print("订单未签收且未取消, 无法删除! ")
    else:
        confirm="2147483648"
        while not (confirm=="y" or confirm=="n" or confirm==""):
            confirm=input("是否确认删除: (y) / n")
            if not (confirm=="y" or confirm=="n" or confirm==""):
                print("输入有误, 请重新输入! ")
        if confirm=="y" or confirm=="":
            del order_name_list[order_id-1]
            del order_dish_message_list[order_id-1]
            del order_time_list[order_id-1]
            del order_address_list[order_id-1]
            del order_state_list[order_id-1]
            del order_total_price_list[order_id-1]
            print("订单删除成功! ")
        else:
            print("已取消删除订单! ")
    return

def like():
    print("*"*5, "我要点赞", "*"*5)
    like_dish_id=-1
    while not 0<=like_dish_id-1<=len(dish_name_list):
        print_dish()
        like_dish_id=int(input("请输入您要点赞的菜品编号: "))
        if not 0<=like_dish_id-1<=len(dish_name_list):
            print("菜品不存在, 请重新输入")
    dish_like_list[like_dish_id-1]+=1
    print("点赞成功! ")
    return

def init_order():
    order_name_list.append("张三")
    order_dish_message_list.append("红烧带鱼 2 份")
    order_time_list.append(12)
    order_address_list.append("北京市昌平区沙河镇北京科技经营管理学院沙河新校区 7 号楼")
    order_state_list.append(9)
    order_total_price_list.append(dish_price_list[0]*2)
    return

def state_parse(state_id: int) -> str:
    match state_id:
        case 0:
            return "Order placed[订单已提交]"
        case 1:
            return "Order accepted[商家已接单]"
        case 2:
            return "Preparing your order[备餐中]"
        case 3:
            return "Ready for pickup[已出餐]"
        case 4:
            return "Assigning a courier[正在分配骑手]"
        case 5:
            return "Courier assigned[骑手已接单]"
        case 6:
            return "Courier arrived at restaurant[骑手已到店]"
        case 7:
            return "Picked up[骑手已取餐]"
        case 8:
            return "Out for delivery[骑手配送中]"
        case 9:
            return "Delivered[订单已完成]"
        case -1:
            return "Order canceled[订单已取消]"
        case _:
            return "Unknown state[状态未知]"
