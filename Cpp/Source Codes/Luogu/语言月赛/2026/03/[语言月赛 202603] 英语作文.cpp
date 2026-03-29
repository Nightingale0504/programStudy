#include<bits/stdc++.h>
using namespace std;
#define int long long
string s;
signed main(){
    cin>>s;
    for (int i=0;i<s.length();i++){
        if (i!=0 && s[i]>='A' && s[i]<='Z' && s[i-1]!='.'){
            s.insert(i,".");
            i++;
        }
        if ((i==0 || s[i-1]=='.') && s[i]>='a' && s[i]<='z'){
            s[i]+='A'-'a';
        }
    }
    if (s[s.length()-1]!='.'){
        s+='.';
    }
    cout<<s<<'\n';
    return 0;
}