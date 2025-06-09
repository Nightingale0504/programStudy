#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
int ans,l,r,len;
signed main(){
    cin>>s;
    ans=len=s.size();
    l=0;
    r=len-1;
    while (l<r){
        while (s[l]!='A' && l<len){
            l++;
        }
        while (s[r]!='B' && r>=0){
            r--;
        }
        if (l>=r){
            break;
        }
        ans-=2;
        l++;
        r--;
    }
    printf("%lld",ans);
    return 0;
}