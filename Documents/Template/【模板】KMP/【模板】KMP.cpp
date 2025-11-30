#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e6+5;
string s1,s2;
int nxt[maxN];
vector<int> ans;
signed main(){
    cin>>s1>>s2;
    int i=0; // i -> 当前的最长公共前后缀长度
    for (int j=2;j<=s2.length();j++){
        while (i>0 && s2[i]!=s2[j-1]){
            i=nxt[i];
        }
        if (s2[i]==s2[j-1]){
            i++;
        }
        nxt[j]=i;
    }
    i=0; // i -> 匹配成功的子串长度
    for (int j=0;j<s1.length();j++){
        while (i>0 && s2[i]!=s1[j]){
            i=nxt[i];
        }
        if (s2[i]==s1[j]){
            i++;
        }
        if (i==s2.length()){
            ans.push_back(j-i+1);
            i=nxt[i];
        }
    }
    for (int j=0;j<ans.size();j++){
        printf("%lld\n",ans[j]+1);
    }
    for (int j=1;j<=s2.length();j++){
        printf("%lld ",nxt[j]);
    }
    return 0;
}