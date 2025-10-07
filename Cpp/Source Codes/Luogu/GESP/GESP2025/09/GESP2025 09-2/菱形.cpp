#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int mx,my,m;
signed main(){
    scanf("%lld",&n);
    mx=n/2+1;
    my=n/2+1;
    m=n/2;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            int a=abs(mx-i)+abs(my-j);
            if (a==m){
                printf("#");
            }else{
                printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}