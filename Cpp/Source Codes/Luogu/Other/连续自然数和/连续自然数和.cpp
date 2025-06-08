#include<bits/stdc++.h>
#define int long long
using namespace std;
int m,l=1,r=1,sum;
signed main(){
    scanf("%lld",&m);
    while (l<=m/2){
        while (sum<m && r<=m){
            sum+=r;
            r++;
        }
        if (sum==m && (r-l)>=2){
            printf("%lld %lld\n",l,r-1);
        }
        sum-=l;
        l++;
    }
    return 0;
}