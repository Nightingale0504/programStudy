#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,ans;
signed main(){
	scanf("%lld",&n);
	if (n<0){
		n=n*-1;
		printf("-");
	}
	for (int i=n;i>=1;i/=10){
		ans*=10;
		ans+=i%10;
	}
	printf("%lld",ans);
	return 0;
}

