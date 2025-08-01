#include<bits/stdc++.h> 
using namespace std;
#define int long long
vector<int> v;
int n,a,x;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a);
        v.push_back(a);
    }
    scanf("%lld",&x);
    v.erase(v.begin()+x-1);
    for (int i=0;i<v.size();i++){
        printf("%lld ",v[i]);
    }
	return 0;
}