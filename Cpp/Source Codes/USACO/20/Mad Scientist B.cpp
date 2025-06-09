#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,ans;
string a,b;
signed main(){
    scanf("%lld",&n);
    cin>>a>>b;
    for (int i=0;i<n;i++){
        if (a[i]!=b[i] && i==0){
            ans++;
        }else if (a[i]!=b[i] && a[i-1]==b[i-1]){
            ans++;
        }
    }
    printf("%lld",ans);
    return 0;
}