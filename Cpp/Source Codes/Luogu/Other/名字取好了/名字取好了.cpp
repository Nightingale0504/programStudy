#include<bits/stdc++.h>
using namespace std;
#define int long long
string fn,ln,state;
signed main(){
    cin>>fn>>ln>>state;
    if (state=="Accepted"){
        printf("%s %s",fn.c_str(),ln.c_str());
    }else{
        printf("%s %s",ln.c_str(),fn.c_str());
    }
    return 0;
}