#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=105;
int n,m,q,a[maxN][maxN];
int x,y;
int sum;
signed main(){
    scanf("%lld%lld%lld",&n,&m,&q);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    while (q--){
        scanf("%lld%lld",&x,&y);
        sum=0;
        while (true){
            if (x<1 || x>n || y<1 || y>m){
                printf("%lld\n",sum);
                break;
            }
            if (sum>n*m){
                printf("-1\n");
                break;
            }
            if (a[x][y]==1){
                x--;
            }else if (a[x][y]==2){
                x++;
            }else if (a[x][y]==3){
                y--;
            }else if (a[x][y]==4){
                y++;
            }
            sum++;
        }
    }
    return 0;
}