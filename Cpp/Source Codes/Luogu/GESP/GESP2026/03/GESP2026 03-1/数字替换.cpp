#include<bits/stdc++.h>
using namespace std;
#define int long long
string s;
signed main(){
    cin>>s;
    for(int i=0;i<s.size();i++){
        if (s[i]=='4'){
            s[i]='8';
        }
    }
    cout<<s;
    return 0;
}