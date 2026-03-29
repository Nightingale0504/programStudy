#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=305;
int n,m,t,a[maxN][maxN],b[maxN],c[maxN],d[maxN],k[maxN],err0r;
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++){ 
        scanf("%lld",&k[i]);
        for (int j=1;j<=k[i];j++){
            scanf("%lld",&a[i][j]);
        }
    }
    while (m--){
        scanf("%lld",&t);
        for (int i=1;i<=t;i++){
            scanf("%lld",&b[i]);
        }
        for (int i=1;i<=t;i++){
            scanf("%lld",&c[b[i]]);
        }
        for (int i=1;i<=t;i++){
            err0r=0;
            for (int j=1;j<=k[b[i]];j++){
                if (d[a[b[i]][j]]!=1){
                    printf("Error\n");
                    err0r=1;
                    break;
                }
            }
            if (err0r){
                break;
            }
        }
        if (err0r){
            continue;
        }
        for (int i=1;i<=t;i++){
            err0r=0;
            if (d[b[i]]==1){
                printf("Error\n");
                err0r=1;
                break;
            }
        }
        if (err0r){
            continue;
        }
        for (int i=1;i<=t;i++){
            if (c[b[i]]>=60){
                printf("P");
                d[b[i]]=1;
            }else{
                printf("F");
                d[b[i]]=2;
            }
        }
        printf("\n");
    }
    return 0;
}