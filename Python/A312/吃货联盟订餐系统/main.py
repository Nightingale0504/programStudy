# include models
import subprocess, os, unicodedata

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

# feature functions define
def display_len(text:str) -> int:
    length=0
    for ch in text:
        if unicodedata.east_asian_width(ch) in ("W", "F"):
            length+=2
        else:
            length+=1
    return length
def clear_screen():
  cmd=["cls"] if os.name=="nt" else ["clear"]
  subprocess.run(cmd, shell=(os.name == "nt"), check=False)
  return

# main system functions define
def return_menu():
    opt=int(input("输入 0 返回菜单:" ))
    if opt==0:
        clear_screen()
        menu()
    return
def order():
    print("*"*15)
    print("我要订餐")
    print("*"*15)
    return_menu()
    return
def check_package():
    print("*"*15)
    print("查看餐袋")
    print("序号  订餐人    餐品信息                     送餐时间               送餐地址                                                              总金额          订单状态")
    for i in range(len(order_name_list)):
        print(i+1, end="")
        print(" "*(6-display_len(str(i))), end="")
        print(order_name_list[i], end="")
        print(" "*(10-display_len(order_name_list[i])), end="")
        print(order_dish_message_list[i], end="")
        print(" "*(29-display_len(order_dish_message_list[i])), end="")
        print(order_time_list[i], end="")
        print(" "*(23-display_len(order_time_list[i])), end="")
        print(order_address_list[i], end="")
        print(" "*(70-display_len(order_address_list[i])), end="")
        print(order_total_price_list[i], "元", end="")
        print(" "*(13-display_len(str(order_total_price_list[i]))), end="")
        print(state_parse(order_state_list[i]), end="")
    print("\n")
    print("*"*15)
    return_menu()
    return
def confirm_receipt_of_order():
    print("*"*15)
    print("签收订单")
    print("*"*15)
    return_menu()
    return
def remove_order():
    print("*"*15)
    print("删除订单")
    print("*"*15)
    return_menu()
    return
def like():
    print("*"*15)
    print("我要点赞")
    print("*"*15)
    return_menu()
    return
def init_order():
    order_name_list.append("张三")
    order_dish_message_list.append("红烧带鱼 2 条")
    order_time_list.append("2026-11-19 16:35:04")
    order_address_list.append("北京科技经营管理学院沙河新校区 7 号楼")
    order_state_list.append(9)
    order_total_price_list.append(dish_price_list[0]*2)
    return
def state_parse(state_id:int) -> str:
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
        case 10:
            return "Order canceled[订单已取消]"
        case _:
            return "Unknown state[状态未知]"
def menu():
    print("欢迎使用“ 吃货联盟订餐系统 ”")
    print("*"*35)
    print("1. 我要订餐")
    print("2. 查看餐袋")
    print("3. 签收订单")
    print("4. 删除订单")
    print("5. 我要点赞")
    print("6. 退出系统")
    print("*"*35)
    opt=int(input("请选择: "))
    clear_screen()
    match opt:
        case 1:
            order()
        case 2:
            check_package()
        case 3:
            confirm_receipt_of_order()
        case 4:
            remove_order()
        case 5:
            like()
        case 6:
            print("谢谢使用, 欢迎下次光临! ")
            exit()
    return

# system execute define
if __name__=="__main__":
    init_order()
    menu()