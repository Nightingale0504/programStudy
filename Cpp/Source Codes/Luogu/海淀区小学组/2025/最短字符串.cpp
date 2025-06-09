#include<bits/stdc++.h>
#define int long long
using namespace std;
map<char,int> charset,freq;
int n,l,r,tot,cnt,ans=INT_MAX;
string s;
signed main(){
    scanf("%lld",&n);
    cin>>s;
    s='^'+s;
    l=1;
    for (int i=1;i<=n;i++){
        char c=s[i];
        charset[c]++;
        if (charset[c]==1){
            tot++;
        }
    }
    for (r=1;r<=n;r++){
        char c=s[r];
        freq[c]++;
        if (freq[c]==1){
            cnt++;
        }
        while (cnt==tot && l<=r){
            ans=min(ans,r-l+1);
            char x=s[l];
            freq[x]--;
            if (freq[x]==0){
                cnt--;
            }
            l++;
        }
    }
    printf("%lld",ans);
    return 0;
}