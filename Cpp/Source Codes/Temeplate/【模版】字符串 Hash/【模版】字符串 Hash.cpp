#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
const int maxN=1e6+5;
ull sum[maxN],l,r,pb[maxN],Hash;
string s;
signed main(){
    cin>>s;
    s='^'+s;
    pb[0]=1;
    for (int i=1;i<=s.length();i++){
        sum[i]=sum[i-1]*13331+s[i];
        pb[i]=pb[i-1]*13331;
    }
    Hash=sum[r]-sum[l-1]*pb[r-l+1];
    printf("%ull",Hash);
    return 0;
}