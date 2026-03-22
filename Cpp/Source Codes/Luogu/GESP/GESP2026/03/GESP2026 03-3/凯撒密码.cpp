#include<bits/stdc++.h>
#define int long long
using namespace std;
string a,b,secret;
int offset;
signed main(){
    cin>>a>>b>>secret;
    offset=b[0]-a[0];
    for (int i=0;i<secret.length();i++){
        secret[i]-=offset;
        if (secret[i]<'A'){
            secret[i]+=26;
        }
        if (secret[i]>'Z'){
            secret[i]-=26;
        }
    }
    cout<<secret;
    return 0;
}