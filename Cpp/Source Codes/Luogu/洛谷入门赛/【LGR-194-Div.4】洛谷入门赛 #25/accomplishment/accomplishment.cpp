#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m,sum;
int a;
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf("%lld",&a);
			sum=max(sum,a);
		}
	}
	printf("%lld",sum);
	return 0;
}

