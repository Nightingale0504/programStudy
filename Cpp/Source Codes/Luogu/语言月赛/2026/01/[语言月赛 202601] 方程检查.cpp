#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=30;
int q,n,tmp,tmp2,jian,b[maxN],a,b;
string s,k[maxN];
signed main(){
    scanf("%lld",&q);
    while (q--){
        scanf("%lld",&n);
        jian=0;
        cin>>s;
        for (int i=0;i<n;i++){
            cin>>k[i];
            tmp=k[i][0]-'a'+1;
            k[i].erase(0,2);
            for (int j=0;j<k[i].size();j++){
                tmp2=tmp2*10+k[i][j]-'0';
            }
            b[tmp]=tmp2;
            tmp2=0;
        }
        for (int i=0;i<s.size();i++){
            if (s[i]=='-'){
                jian=1;
            }
            if (jian){
                
            }
        }
    }
    return 0;
}