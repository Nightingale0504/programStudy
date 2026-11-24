# include models
from time import sleep
from feature_functions import display_len, query_state

# define data storages
books=[]

# define book system functions
def enter_book():
    book_id=""
    flag=0
    while not (book_id!="" and flag==0):
        book_id=input("请输入书号: ").strip()
        if book_id=="":
            print("书号不能为空, 请重新输入! ")
        flag=0
        for i in books:
            if i[0]==book_id:
                flag=1
        if flag:
            print("书籍已存在, 请重新输入! ")
    book_name=""
    while book_name=="":
        book_name=input("请输入书名: ").strip()
        if book_name=="":
            print("书名不能为空, 请重新输入! ")
    book_price=""
    while not book_price.isdigit():
        book_price=input("请输入价格: ").strip()
        if not book_price.isdigit():
            print("价格必须是数字, 请重新输入! ")
    book_price_int=int(book_price)
    book_state=-1
    while not book_state in ["0", "1"]:
        book_state=input("请输入状态 ( 0. Available[在馆] / 1. Checked out[已借出] ):").strip()
        if not book_state in ["0", "1"]:
            print("状态只能是 0. Available[在馆] / 1. Checked out[已借出], 请重新输入! ")
    book=(book_id, book_name, book_price_int, book_state)
    books.append(book)
    print("√ 录入成功:", book_id)
    sleep(2)
    return

def query_book():
    book_id=""
    while book_id=="":
        book_id=input("请输入书号: ").strip()
        if book_id=="":
            print("书号不能为空, 请重新输入! ")
    print("----- 查询结果 -----")
    for i in books:
        if i[0]==book_id:
            print("书号:", i[0])
            print("书名:", i[1])
            print("价格:", i[2], "元")
            print("状态:", query_state(i[3]))
            sleep(2)
            return
    print("书籍不存在! ")
    sleep(2)
    return

def modify_book():
    book_id=""
    while book_id=="":
        book_id=input("请输入书号: ").strip()
        if book_id=="":
            print("书号不能为空, 请重新输入! ")
    book_name=""
    book_coord=0
    for i in range(len(books)):
        if books[i][0]==book_id:
            book_name=books[i][1]
            book_coord=i
    if book_name=="":
        print("书籍不存在! ")
        sleep(2)
        return
    book_price=""
    while not book_price.isdigit():
        book_price=input("请输入新价格: ").strip()
        if not book_price.isdigit():
            print("价格必须是数字, 请重新输入! ")
    book_price_int=int(book_price)
    book_state=-1
    while not book_state in ["0", "1"]:
        book_state=input("请输入新状态 ( 0. Available[在馆] / 1. Checked out[已借出] ):").strip()
        if not book_state in ["0", "1"]:
            print("状态只能是 0. Available[在馆] / 1. Checked out[已借出], 请重新输入! ")
    book=(book_id, book_name, book_price_int, book_state)
    books[book_coord]=book
    print("√ 修改成功:", book_id)
    sleep(2)
    return

def delete_book():
    book_id=""
    while book_id=="":
        book_id=input("请输入书号: ").strip()
        if book_id=="":
            print("书号不能为空, 请重新输入! ")
    for i in books:
        if i[0]==book_id:
            book=(i[0], i[1], i[2], query_state(i[3]))
            print("待删除书籍信息:", book)
            confirm="14443"
            while not (confirm=="y" or confirm=="n" or confirm==""):
                confirm=input("是否确认删除: ([y] / n):").strip()
                if not (confirm=="y" or confirm=="n" or confirm==""):
                    print("输入不合法, 请重新输入! ")
            if confirm=="" or confirm=="y":
                books.remove(i)
                print("√ 删除成功:", book_id)
                sleep(2)
            else:
                print("已取消删除! ")
                sleep(2)
            return
    print("书籍不存在, 无法删除! ")
    sleep(2)
    return

def show_all_books():
    if len(books)==0:
        print("未查询到书籍! ")
        sleep(2)
        return
    print("书号     书名              价格       状态")
    for i in books:
        print(i[0], end="")
        print(" "*(9-display_len(str(i[0]))), end="")
        print(i[1], end="")
        print(" "*(18-display_len(str(i[1]))), end="")
        print(i[2], "元", end="")
        print(" "*(8-display_len(str(i[2]))), end="")
        print(query_state(i[3]), end="")
        print()
    sleep(2)
    return