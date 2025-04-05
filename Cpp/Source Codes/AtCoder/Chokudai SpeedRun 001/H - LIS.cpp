#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e5+5;
int n,a[maxN],lis[maxN],now=1; 
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	lis[now]=a[1];
	for (int i=2;i<=n;i++){
		if (a[i]>lis[now]){
			lis[++now]=a[i];
		}else{
			lis[lower_bound(lis+1,lis+now+1,a[i])-lis]=a[i];
		}
	}
	printf("%lld",now);
	return 0;
}

