#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,cnt,n,l,r;
signed main(){
    scanf("%lld",&T);
    while (T--){
        cnt=0;
        string s;
        cin>>s;
        n=s.size();
        for (int i=0;i<n;i++){
            cnt++;
            l=i-1;
            r=i+1;
            while (l>=0 && r<n){
                if (s[l]==s[r] || s[l]=='?' || s[r]=='?'){
                    cnt++;
                    l--;
                    r++;
                }else{
                    break;
                }
            }
        }
        for (int i=0;i<n-1;i++){
            if (s[i]==s[i+1] || s[i]=='?' || s[i+1]=='?'){
                cnt++;
                l=i-1;
                r=i+2;
                while (l>=0 && r<n){
                    if (s[l]==s[r] || s[l]=='?' || s[r]=='?'){
                        cnt++;
                        l--;
                        r++;
                    }else{
                        break;
                    }
                }
            }
        }
        printf("%lld\n",cnt);
    }
    return 0;
}