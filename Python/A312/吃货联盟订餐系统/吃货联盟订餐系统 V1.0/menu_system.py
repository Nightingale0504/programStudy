# include models
from time import sleep
from order_system import order, check_package, confirm_receipt_of_order, remove_order, like
from feature_functions import clear_screen

# define menu functions
def return_menu():
    opt=int(input("输入 0 返回菜单:" ))
    if opt==0:
        clear_screen()
        menu()
    else:
        print("输入有误, 请重新输入")
        return_menu()
    return

def menu():
    clear_screen()
    print("欢迎使用“ 吃货联盟订餐系统 V1.0 ”")
    print("*"*35)
    print("1. 我要订餐")
    print("2. 查看餐袋")
    print("3. 签收订单")
    print("4. 删除订单")
    print("5. 我要点赞")
    print("6. 退出系统")
    print("*"*35)
    opt=int(input("请选择: "))
    if 1<=opt<=5:
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
        case _:
            print("选项不存在! ")
            sleep(3)
            menu()
    return_menu()
    return
