#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e6+5;
int n,k,sum,t,ans,cnt;
map<int,int> m;
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=0;i<n;i++){
		scanf("%lld",&t);
		sum=(sum+t)%k;
		m[sum]++;
	}
	for (int i=0;i<k;i++){
		ans+=m[i]*(m[i]-1)/2;
	}
	ans+=m[0];
	printf("%lld",ans);
	return 0;
}

