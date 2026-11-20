print("Hello World!")

for i in range(1, 11):
    print(i, end=" ")
print("\n")

for i in range(1, 10):
    if i&1!=0:
        print(i, end=" ")
print("\n")

def func2(a, b ,c=10):
    return a+b+c
print(func2(1, 2, 3))

