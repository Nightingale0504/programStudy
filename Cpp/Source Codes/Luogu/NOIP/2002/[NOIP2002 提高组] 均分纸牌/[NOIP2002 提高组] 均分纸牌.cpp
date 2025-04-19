#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,a[105],k,t;
int ans;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
		k+=a[i];
	}
	k/=n;
	for (int i=0;i<n;i++){
		if (a[i]!=k){
			ans++;
			a[i+1]-=k-a[i];
		}
	}
	printf("%lld",ans);
	return 0;
}

