#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=5e5+5;
int T;
int n,m,x,y;
vector< vector<int> > v(maxN);
signed main(){
    scanf("%lld",&T);
    while (T--){
        scanf("%lld%lld",&n,&m);
        for (int i=1;i<=n;i++){
            v[i].clear();
        }
        while (m--){
            scanf("%lld%lld",&x,&y);
            v[x].push_back(y);
        }
        for (int i=1;i<=n;i++){
            sort(v[i].begin(),v[i].end());
            for (int j=0;j<v[i].size();j++){
                printf("%lld ",v[i][j]);
            }
            printf("\n");
        }
    }
	return 0;
}