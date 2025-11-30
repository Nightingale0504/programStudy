#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxL=1e6+5;
int l,length,nxt[maxL];
string s;
signed main(){
    scanf("%lld",&l);
    cin>>s;
    int i=0;
    for (int j=2;j<=s.length();j++){
        while (i>0 && s[i]!=s[j-1]){
            i=nxt[i];
        }
        if (s[i]==s[j-1]){
            i++;
        }
        nxt[j]=i;
    }
    length=l-nxt[l];
    printf("%lld",length);
    return 0;
}