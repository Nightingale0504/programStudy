#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=105;
int T,n,a[maxN],cnt;
bool flag;
signed main(){
    scanf("%lld",&T);
    while(T--){
        flag=true;
        cnt=0;
        scanf("%lld",&n);
        for(int i=1;i<=n;i++){
            scanf("%lld",&a[i]);
        }
        if (n<10 || n>13){
            printf("No\n");
            continue;
        }
        sort(a+1,a+n+1);
        if (a[1]!=1){
            printf("No\n");
            continue;
        }
        for (int i=1;i<=n;i++){
            if (a[i]==1){
                cnt++;
            }
            if (a[i]-a[i-1]>2 && i!=1 && i!=n){
                printf("No\n");
                flag=false;
                break;
            }
        }
        if (cnt<2 && flag){
            printf("No\n");
        }else{
            printf("Yes\n");
        }
    }
    return 0;
}