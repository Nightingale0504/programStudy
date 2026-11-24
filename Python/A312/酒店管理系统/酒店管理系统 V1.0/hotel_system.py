# include models
from time import sleep
from feature_functions import display_len, query_state

# define data storages
rooms=[]

# define hotel system functions
def enter_room():
    room_id=""
    flag=0
    while not (room_id.isdigit() and flag==0):
        room_id=input("请输入房号: ").strip()
        if not room_id.isdigit():
            print("房号必须是数字, 请重新输入! ")
        room_id_int=int(room_id)
        for i in range(len(rooms)):
            if rooms[i][0]==room_id_int:
                flag=1
        if flag:
            print("房间已存在, 请重新输入! ")
    room_id_int=int(room_id)
    room_type=""
    while room_type=="":
        room_type=input("请输入房型: ").strip()
        if room_type=="":
            print("房型不能为空, 请重新输入! ")
    room_price=""
    while not room_price.isdigit():
        room_price=input("请输入房价: ").strip()
        if not room_price.isdigit():
            print("房价必须是数字, 请重新输入! ")
    room_price_int=int(room_price)
    room_state=-1
    while not (room_state==0 or room_state==1):
        room_state=int(input("请输入状态 ( 0. Idle[空闲] / 1. Checked in[已入住] ):").strip())
        if not (room_state==0 or room_state==1):
            print("状态只能是 0. Idle[空闲] / 1. Checked in[已入住], 请重新输入! ")
    room=(room_id_int, room_type, room_price_int, room_state)
    rooms.append(room)
    print("√ 录入成功:", room_id_int)
    sleep(2)
    return

def query_room():
    room_id=""
    while not room_id.isdigit():
        room_id=input("请输入房号: ").strip()
        if not room_id.isdigit():
            print("房号必须是数字, 请重新输入! ")
    room_id_int=int(room_id)
    print("----- 查询结果 -----")
    for i in range(len(rooms)):
        if rooms[i][0]==room_id_int:
            print("房号:", rooms[i][0])
            print("房型:", rooms[i][1])
            print("房价:", rooms[i][2], "元")
            print("状态:", query_state(rooms[i][3]))
            sleep(2)
            return
    print("房间不存在! ")
    sleep(2)
    return

def modify_room():
    room_id=""
    while not room_id.isdigit():
        room_id=input("请输入要修改的房号: ").strip()
        if not room_id.isdigit():
            print("房号必须是数字, 请重新输入! ")
    room_id_int=int(room_id)
    room_type=""
    room_coord=0
    for i in range(len(rooms)):
        if rooms[i][0]==room_id_int:
            room_type=rooms[i][1]
            room_coord=i
    if room_type=="":
        print("房间不存在! ")
        sleep(2)
        return
    room_price=""
    while not room_price.isdigit():
        room_price=input("请输入新房价: ").strip()
        if not room_price.isdigit():
            print("房价必须是数字, 请重新输入! ")
    room_price_int=int(room_price)
    room_state=-1
    while not (room_state==0 or room_state==1):
        room_state=int(input("请输入新状态 ( 0. Idle[空闲] / 1. Checked in[已入住] ):").strip())
        if not (room_state==0 or room_state==1):
            print("状态只能是 0. Idle[空闲] / 1. Checked in[已入住], 请重新输入! ")
    room=(room_id_int, room_type, room_price_int, room_state)
    rooms[room_coord]=room
    print("√ 修改成功:", room_id_int)
    sleep(2)
    return

def delete_room():
    room_id=""
    while not room_id.isdigit():
        room_id=input("请输入要删除的房号: ").strip()
        if not room_id.isdigit():
            print("房号必须是数字, 请重新输入! ")
    room_id_int=int(room_id)
    for i in range(len(rooms)):
        if rooms[i][0]==room_id_int:
            room=(rooms[i][0], rooms[i][1], rooms[i][2], query_state(rooms[i][3]))
            print("待删除房间信息:", room)
            confirm=input("是否确认删除: ([y] / n):").strip()
            if confirm=="" or confirm=="y":
                del rooms[i]
                print("√ 删除成功:", room_id_int)
                sleep(2)
            else:
                print("已取消删除! ")
                sleep(2)
            return
    print("房间不存在, 无法删除! ")
    sleep(2)
    return

def show_all_rooms():
    if len(rooms)==0:
        print("未查询到房间! ")
        sleep(2)
        return
    print("房号   房型      价格    状态")
    for i in rooms:
        print(i[0], end="")
        print(" "*(7-display_len(str(i[0]))), end="")
        print(i[1], end="")
        print(" "*(10-display_len(str(i[1]))), end="")
        print(i[2], "元", end="")
        print(" "*(5-display_len(str(i[2]))), end="")
        print(i[3], end="")
        print()
    sleep(2)
    return