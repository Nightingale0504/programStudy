#include<bits/stdc++.h>
using namespace std;
#define int long long
int T,cnt;
string s1,s2;
signed main(){
    scanf("%lld",&T);
    while (T--){
        cin>>s1>>s2;
        string t1="",t2="";
        for (int i=s1.length()-1;i>=0;i--){
            if (s1[i]=='#'){
                break;
            }
            if (isdigit(s1[i])){
                t1=s1[i]+t1;
            }
        }
        int t=s2.find("\\boxed");
        for (int i=t;i<s2.length();i++){
            if (s2[i]=='}'){
                break;
            }
            if (isdigit(s2[i])){
                t2=t2+s2[i];
            }
        }
        if (t1==t2){
            cnt++;
        }
    }
    printf("%lld\n",cnt);
    return 0;
}