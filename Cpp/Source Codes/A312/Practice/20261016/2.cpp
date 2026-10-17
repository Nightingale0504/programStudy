#include<bits/stdc++.h>
#define int long long
using namespace std;
int opt;
double price,total;
signed main(){
    scanf("%lf%lld",&price,&opt);
    switch (opt){
        case 1:{
            total=price*1.0;
            return;
        };
        case 2:{
            total=price*0.9;
            return;
        };
        case 3:{
            total=price*0.8;
            return;
        };
    }
    printf("%lf %lf",price,total);
    return 0;
}