#include<bits/stdc++.h>
using namespace std;
#define int long long
// 欧几里得算法 辗转相除法
inline int gcd(int x,int y){
    if (x%y==0){
        return y;
    }
    return gcd(y,x%y);
}
// 扩展欧几里得算法 求整数解x,y
inline int exgcd(int a,int b,int &x,int &y){
    if (b==0){
        x=1;
        y=0;
        return a;
    }
    int X,Y;
    int d=exgcd(b,a%b,X,Y);
    x=Y;
    y=X-(a/b)*Y;
    return d;
}
int a,b,x,y;
signed main(){
    /* 扩展欧几里得
       1. 求 ax+by=gcd(a,b) 的一组整数解
        ax+by=gcd(a,b)
        gcd(a,b)=gcd(b,a%b)
        gcd(b,a%b)=bx1+(a%b)y1
        ax+by=bx1+(a%b)y1
        a%b=a-floor(a/b)*b
        ax+by=bx1+(a-floor(a/b)*b)y1
        ax+by=ay1+b(x1-floor(a/b)*y1)
        x=y1, y=x1-floor(a/b)*y1
    */
    scanf("%lld%lld",&a,&b);
    int d=exgcd(a,b,x,y);
    printf("x=%lld, y=%lld, d=%lld\n",x,y,d);
    return 0;
}