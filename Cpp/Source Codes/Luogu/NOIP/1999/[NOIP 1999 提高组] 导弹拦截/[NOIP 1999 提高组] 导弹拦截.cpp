#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e6+5;
int x,n,a[maxN],now=1,lis[maxN],num;
int lis2[maxN];
signed main(){
    while (scanf("%lld",&x)!=EOF){
        n++;
        a[n]=x;
    }
    lis[now]=a[1];
    for (int i=2;i<=n;i++){
        if (a[i]<=lis[now]){
            now++;
            lis[now]=a[i];
        }else{
            num=upper_bound(lis+1,lis+now+1,a[i],greater<int>())-lis; // 第一个大于a[i]的元素: upper_bound(lis+1,lis+now+1,[less<int>()])-lis
                                                                      // 第一个小于a[i]的元素: upper_bound(lis+1,lis+now+1,greater<int>())-lis
            lis[num]=a[i];
        }
    }
    printf("%lld\n",now);
    now=1;
    lis2[now]=a[1];
    for (int i=2;i<=n;i++){
        if (a[i]>lis[now]){
            now++;
            lis[now]=a[i];
        }else{
            num=lower_bound(lis+1,lis+now+1,a[i])-lis;
            lis[num]=a[i];
        }
    }
    printf("%lld",now);
    return 0;
}