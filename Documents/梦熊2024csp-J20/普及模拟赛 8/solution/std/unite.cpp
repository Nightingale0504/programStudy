#include <bits/stdc++.h>
using namespace std;
int llt[100005];
int gcd(int a,int b){
    if (b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int n;
    cin>>n;
    for (int i=1;i<=n;i++) cin>>llt[i];
    if (n==1){
        if (llt[1]==1) cout<<0<<endl;
        else cout<<1<<endl;
        continue;
    }
    else if (n==2){
        if (gcd(llt[1],llt[2])==1) cout<<0<<endl;
        else if (gcd(llt[1],gcd(llt[2],2))==1) cout<<1<<endl;
        else cout<<2<<endl;
        continue;
    }
    int sumcd=0;
    for (int i=1;i<=n-2;i++) sumcd=gcd(llt[i],sumcd);
    if (gcd(sumcd,gcd(llt[n],llt[n-1]))==1) cout<<0<<endl;
    else if (gcd(sumcd,gcd(gcd(llt[n],n),llt[n-1]))==1) cout<<1<<endl;
    else if (gcd(sumcd,gcd(llt[n],gcd(llt[n-1],n-1)))==1) cout<<2<<endl;
    else cout<<3<<endl;
    return 0;
}
