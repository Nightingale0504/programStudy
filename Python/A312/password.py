def check_pwd(pwd: str) -> bool:
    string=0
    number=0
    for i in pwd:
        if '0'<=i<='9':
            number=1
        if 'z'<=i<='a' or 'Z'<=i<='A':
            string=1
    if 6<=len(pwd)<=16 and number==1 and string==1:
        return True
    else:
        return False