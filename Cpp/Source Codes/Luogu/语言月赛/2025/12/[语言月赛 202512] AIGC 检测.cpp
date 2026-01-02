#include<bits/stdc++.h>
using namespace std;
#define int long long
int sa,sb,sc,u;
signed main(){
    scanf("%lld%lld%lld",&sa,&sb,&sc);
    if (sa>=30 && sa<=70){
        u=sa;
    }else if ((sb>=30 && sb<=70) && (sc<30 || sc>70)){
        u=sb;
    }else if ((sc>=30 && sc<=70) && (sb<30 || sb>70)){
        u=sc;
    }else if ((sb>=30 && sb<=70) && (sc>=30 && sc<=70)){
        u=min(sb,sc);
    }else{
        u=0;
    }
    printf("%lld\n",u);
    return 0;
}