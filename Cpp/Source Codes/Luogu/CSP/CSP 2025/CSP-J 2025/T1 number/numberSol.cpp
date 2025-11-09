#include<bits/stdc++.h>
#define int long long
using namespace std;
string s;
signed main(){
    cin>>s;
    sort(s.begin(),s.end());
    for (int i=s.length()-1;i>=0;i--){
        if (s[i]>='0' && s[i]<='9'){
            cout<<s[i];
        }
    }
    return 0;
}