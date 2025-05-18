#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,ans;
char c;
signed main(){
    scanf("%lld",&a);
    cin>>c;
    for (int i=0;i<=255;i++){
        for (int j=0;j<=255;j++){
            for (int k=0;k<=255;k++){
                if (c=='r'){
                    if (i-j>=a && i-k>=a){
                        ans++;
                    }
                }else if (c=='g'){
                    if (j-i>=a && j-k>=a){
                        ans++;
                    }
                }else if (c=='b'){
                    if (k-i>=a && k-j>=a){
                        ans++;
                    }
                }
            }
        }
    }
    printf("%lld",ans);
    return 0;
}