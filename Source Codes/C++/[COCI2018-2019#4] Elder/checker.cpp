#include<bits/stdc++.h>
#include"testlib.h"
int score;
int main(int argc,char *argv[])
{
    registerTestlibCmd(argc,argv);
    score+=(ouf.readChar()==ans.readChar())*2;
    ouf.readEoln(),ans.readEoln();
    score+=(ouf.readInt()==ans.readInt())*3;
    switch(score)
    {
        case 0: quitf(_wa,"The answer is wrong!");
        case 2: quitp(0.4,"You got the first line correct!");
        case 3: quitp(0.6,"You got the second line correct!");
        case 5: quitf(_ok,"The answer is correct!");
    }
    return 0;
}