#include<bits/stdc++.h>
using namespace std;
#define int long long
int h,m;
signed main(){
    scanf("%lld %lld",&h,&m);
    if (h<7 || (h==7 && m<30)){
        printf("EARLY\n");
    }else if (h==7 && (m>=30 && m<=59) || (h==8 && m==0)){
        printf("ON TIME\n");
    }else{
        printf("LATE\n");
    }
    return 0;
}