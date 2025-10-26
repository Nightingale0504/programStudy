#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e5+5;
vector< vector<int> > v(maxN);
int n,m,x,y;
signed main(){
    scanf("%lld%lld",&n,&m);
    while (m--){
        scanf("%lld%lld",&x,&y);
        v[x].push_back(y);
    }
    for (int i=1;i<=n;i++){
        printf("%lld ",v[i].size());
        sort(v[i].begin(),v[i].end());
        for (int j=0;j<v[i].size();j++){
            printf("%lld ",v[i][j]);
        }
        printf("\n");
    }
	return 0;
}