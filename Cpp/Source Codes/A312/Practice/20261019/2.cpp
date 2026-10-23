#include<bits/stdc++.h>
#define int long long
using namespace std;
int num,a;
signed main(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(1, 100);
    num=dis(gen);
    while (a!=num){
        scanf("%lld",&a);
        if (a<num){
            printf("Too small\n");
        }
        else if (a>num){
            printf("Too big\n");
        }
        else{
            printf("Bingo!\n");
        }
    }
    return 0;
}