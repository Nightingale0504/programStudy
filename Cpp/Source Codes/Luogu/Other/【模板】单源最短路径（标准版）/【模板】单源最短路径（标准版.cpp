#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,m,s;
vector< vector< pair<int,int> > > v(maxN);
signed main(){
    scanf("%lld%lld%lld",&n,&m,&s);
    while (m--){
        int x,y,w;
        scanf("%lld%lld%lld",&x,&y,&w);
        v[x].push_back(make_pair(y,w));
    }
    
	return 0;
}