#include<bits/stdc++.h>
#define int long long
using namespace std;
string s,f;
int p,t;
signed main(){
    cin>>s;
    scanf("%lld",&p);
    while (p--){
        cin>>f;
        f='"'+f+'"';
        t=s.find(f);
        if (p==0){
            t=t+f.length()+1;
        }else{
            if (s[t+f.length()+1]=='{'){
                t=t+f.length()+1;
                s=s.substr(t);
            }
        }
    }
    while (s[t]>='0' && s[t]<='9'){
        cout<<s[t];
        t++;
    }
    return 0;
}