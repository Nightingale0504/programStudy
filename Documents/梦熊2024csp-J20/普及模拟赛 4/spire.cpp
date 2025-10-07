#include<bits/stdc++.h>
using namespace std;
void solve() {
	long long n,x,k;
	scanf("%lld%lld%lld",&n,&x,&k);
	priority_queue<long long,vector<long long>,greater<long long> > pq;
	int ans=-1;
	for(int i=1; i<=n; i++) {
		long long in;
		scanf("%lld",&in);
		if(k) {
			k--;
			pq.push(in);
		} else if(pq.size() && pq.top()<in) {
			x-=pq.top();
			pq.pop();
			pq.push(in);
		} else {
			x-=in;
		}
		if(x<=0 && ans==-1) ans=i-1;
	}
	if(ans==-1) ans=n;
	printf("%d\n",ans);
}
int main() {
	freopen("spire2.in","r",stdin);
	freopen("spire2.out","w",stdout);
	int t;
	scanf("%d",&t);
	while(t--) solve();
	return 0;
}
