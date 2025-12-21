#include<bits/stdc++.h>
using namespace std;
#define int long long
string a,b;
bool flag=true;
signed main(){
    cin>>a>>b;
    for (int i=0;i<a.length();i++){
        if (a[i]==b[i] || (a[i]=='l' && b[i]=='I') || (a[i]=='I' && b[i]=='l')){
            flag=true;
        }else{
            flag=false;
            break;
        }
    }
    if (flag){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}