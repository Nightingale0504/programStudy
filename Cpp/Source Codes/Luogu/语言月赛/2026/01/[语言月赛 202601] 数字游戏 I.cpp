#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[4][4],ans;
signed main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%lld",&a[i][j]);
        }
    }
    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]==0){
                ans=10;
                for (int k=0;k<4;k++){
                    ans-=a[i][k];
                }
            }
        }
    }
    printf("%lld",ans);
    return 0;
}