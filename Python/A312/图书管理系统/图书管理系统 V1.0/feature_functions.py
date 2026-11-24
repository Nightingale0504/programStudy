# include models
from subprocess import run
from os import name
from unicodedata import east_asian_width

# feature functions define
def display_len(text: str) -> int:
    length=0
    for ch in text:
        if east_asian_width(ch) in ("W", "F"):
            length+=2
        else:
            length+=1
    return length

def clear_screen():
  cmd=["cls"] if name=="nt" else ["clear"]
  run(cmd, shell=(name == "nt"), check=False)
  return

def query_state(opt: str) -> str:
    match opt:
        case "0":
            return "Available[在馆]"
        case "1":
            return "Checked out[已借出]"
        case _:
            return "Unknown[未知状态]"