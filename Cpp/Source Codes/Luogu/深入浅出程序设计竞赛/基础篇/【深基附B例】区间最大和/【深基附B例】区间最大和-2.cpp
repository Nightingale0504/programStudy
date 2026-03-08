#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=4e6+5;
int n,m,a[maxN],t;
int l=1,r=1,mmax,ans1,ans2;
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++){
        scanf("%lld",&t);
        a[i]=a[i-1]+t;
    }
    while (r<=n){
        t=a[r]-a[l-1];
        if (t>m){
            l++;
        }else{
            if (t>mmax){
                mmax=t;
                ans1=l;
                ans2=r;
            }
            r++;
        }
    }
    printf("%lld %lld %lld",ans1,ans2,mmax);
	return 0;
}
