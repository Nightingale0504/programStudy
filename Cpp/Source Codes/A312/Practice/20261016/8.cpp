#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[]={12, 34, 56, 78, 90};
signed main(){
    for (int i=0;i<5;i++){
        string str=to_string(a[i]);
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }
    return 0;
}