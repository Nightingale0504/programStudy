# include models
import subprocess, os, unicodedata

# feature functions define
def display_len(text: str) -> int:
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
