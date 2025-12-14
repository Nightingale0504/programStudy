#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=105;
int n,m,a[maxN],b[maxN],ans; 
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=0;i<m;i++){
		scanf("%lld",&b[i]);
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			int tmp=(a[i]+b[j])*max(a[i],b[j]);
			ans+=tmp;
		}
	}
	printf("%lld",ans);
	return 0;
}

