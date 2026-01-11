#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,s,c;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		s+=i*i;
		c++;
		c+=2*i;
	}
	c+=n;
	printf("%lld\n%lld",c,s);
	return 0;
}

