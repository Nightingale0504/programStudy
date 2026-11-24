# include models
from time import sleep
from book_system import enter_book, query_book, modify_book, delete_book, show_all_books
from feature_functions import clear_screen

# define menu functions
def menu(served: int):
    served+=1
    clear_screen()
    print("="*38)
    print("     书香图书馆·图书管理系统 V1.0     ")
    print("="*38)
    print("-"*43)
    print("   1. 录入图书  2. 查询图书  3. 修改图书   ")
    print("   4. 删除图书  5. 显示全部  0. 退出系统   ")
    print("-"*43)
    opt=int(input("请选择功能 ( 0~5 ):").strip())
    match opt:
        case 0:
            print("谢谢使用, 欢迎下次光临! ")
            print("共为您服务", served-1, "次")
            sleep(2)
            exit()
        case 1:
            enter_book()
            menu(served)
        case 2:
            query_book()
            menu(served)
        case 3:
            modify_book()
            menu(served)
        case 4:
            delete_book()
            menu(served)
        case 5:
            show_all_books()
            menu(served)
        case _:
            print("输入有误, 请重新输入!")
            sleep(2)
            menu(served-1)