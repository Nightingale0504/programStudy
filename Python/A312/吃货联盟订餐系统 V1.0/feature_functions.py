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