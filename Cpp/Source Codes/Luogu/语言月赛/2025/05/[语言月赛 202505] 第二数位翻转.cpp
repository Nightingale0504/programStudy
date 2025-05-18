#include<bits/stdc++.h>
#define int long long
using namespace std;
string s,a,b,c,ss="";
signed main(){
    cin>>s;
    if (s.length()%2!=0){
        s='0'+s;
    }
    for (int i=0;i<s.size();i+=2){
        ss=s.substr(i,2)+ss;
    }
    if (ss[0]=='0'){
        for (int i=1;i<ss.length();i++){
            cout<<ss[i];
        }
    }else{
        cout<<ss;
    }
    return 0;
}