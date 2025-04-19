#include<bits/stdc++.h> 
using namespace std;
#define int long long
int t,n,a,s;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a);
		s+=t*a;
		t+=a;
	}
	printf("%lld",s);
	return 0;
}

