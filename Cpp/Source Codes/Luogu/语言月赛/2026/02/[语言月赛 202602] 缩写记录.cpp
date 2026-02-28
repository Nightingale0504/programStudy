#include<bits/stdc++.h>
using namespace std;
#define int long long
int n;
string s;
signed main(){
    scanf("%lld",&n);
    while (n--){
        bool sho=1;
        string sh="";
        cin>>s;
        int length=s.length();
        for (int i=0;i<length;i++){
            if (sho){
                sh+=toupper(s[i]);
                sho=0;
            }
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                sho=1;
            }
        }
        cout<<sh<<endl;
    }
    return 0;
}