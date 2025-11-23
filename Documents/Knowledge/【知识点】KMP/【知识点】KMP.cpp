#include<bits/stdc++.h>
using namespace std;
#define int long long
string s;
int nxt[1000005];
signed main(){
    /* KMP - Knuth-Morris-Pratt

    */
    // O(n^2) 解法
    cin>>s;
    nxt[0]=nxt[1]=0;
    for (int j=2;j<=s.length();j++){
        string t=s.substr(0,j);
        for (int len=j-1;len>=1;len--){
            if (t.substr(0,len)==t.substr(j-len)){
                nxt[j]=len;
                break;
            }
        }
    }
    for (int i=0;i<=s.length();i++){
        cout<<nxt[i]<<" ";
    }

    // O(n) 解法
    nxt[0]=nxt[1]=0;
    // i -> 当前最长公共前后缀长度
    // j -> 子串长度
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
    for (int i=0;i<=s.length();i++){
        cout<<nxt[i]<<" ";
    }
    return 0;
}