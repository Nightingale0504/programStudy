# include models
from time import sleep
from hotel_system import enter_room, query_room, modify_room, delete_room, show_all_rooms
from feature_functions import clear_screen

# define menu functions
def menu(service_count: int):
    service_count+=1
    clear_screen()
    print("="*36)
    print("     云栖酒店·前台管理系统 V1.0     ")
    print("="*36)
    print("-"*43)
    print("   1. 录入客房  2. 查询客房  3. 修改客房   ")
    print("   4. 删除客房  5. 显示全部  0. 退出系统   ")
    print("-"*43)
    opt=int(input("请选择功能 ( 0~5 ):").strip())
    match opt:
        case 0:
            print(f"共为您服务 { service_count-1 } 次")
            print("谢谢使用, 欢迎下次光临!")
            exit()
        case 1:
            enter_room()
            menu(service_count)
        case 2:
            query_room()
            menu(service_count)
        case 3:
            modify_room()
            menu(service_count)
        case 4:
            delete_room()
            menu(service_count)
        case 5:
            show_all_rooms()
            menu(service_count)
        case _:
            print("输入有误, 请重新输入!")
            sleep(2)
            menu(service_count)