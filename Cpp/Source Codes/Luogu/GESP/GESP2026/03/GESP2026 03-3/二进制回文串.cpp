#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,cnt;
string s,ss;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        s="";
        int t=i;
        while (t>0){
            s+=(t%2+'0');
            t/=2;
        }
        ss=s;
        reverse(s.begin(),s.end());
        if (ss==s){
            cnt++;
        }
    }
    printf("%lld\n",cnt);
    return 0;
}