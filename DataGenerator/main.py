from cyaron import *
from time import sleep
for i in range(0,50):
    io=IO("test%d.in"%(i+1),"test%d.out"%(i+1))
    n=randint(1,1000)
    io.input_writeln(n)
    for j in range(0,n):
        s=String.random((1,18),charset=NUMBERS)
        io.input_writeln(s)
    io.output_gen("E:\\programStudy\\DataGenerator\\std.exe")
    print("Generated test point %d"%(i+1))
    sleep(1)