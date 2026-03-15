#include<bits/stdc++.h>
using namespace std;
#define int long long
int h1,h2,h3,h4;
signed main(){
    scanf("%lld%lld%lld%lld",&h1,&h2,&h3,&h4);
    int a=abs(h1-h2),b=abs(h1-h3),c=abs(h1-h4);
    if (a<b && b<c){
        printf("%lld",h2);
    }else if (b<a && b<c){
        printf("%lld",h3);
    }else if (c<a && c<b){
        printf("%lld",h4);
    }else if (a==b && a<c){
        printf("%lld",min(h2,h3));
    }else if (a==c && a<b){
        printf("%lld",min(h2,h4));
    }else if (b==c && b<a){
        printf("%lld",min(h3,h4));
    }
    return 0;
}