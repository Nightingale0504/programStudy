#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=15;
int n,m,k,a[105],b[maxN][maxN],cnt;
int c,r;
inline bool cmp(int a,int b){
    return a>b;
}
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n*m;i++){
        scanf("%lld",&a[i]);
    }
    k=a[1];
    sort(a+1,a+n*m+1,cmp);
    for (int i=1;i<=m;i++){
        if (i%2==0){
            for (int j=n;j>=1;j--){
                b[i][j]=a[++cnt];
            }
        }else{
            for (int j=1;j<=n;j++){
                b[i][j]=a[++cnt];
            }
        }
    }
    for (int i=1;i<=m;i++){
        for (int j=1;j<=n;j++){
            if (b[i][j]==k){
                c=i;
                r=j;
            }
        }
    }
    printf("%lld %lld",c,r);
    return 0;
}