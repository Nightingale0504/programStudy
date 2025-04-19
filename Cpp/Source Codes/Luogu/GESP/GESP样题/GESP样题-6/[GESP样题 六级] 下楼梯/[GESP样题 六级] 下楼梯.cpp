#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,f[65];
signed main(){
	scanf("%lld",&n);
	f[1]=1;
	f[2]=2;
	f[3]=4;
	for (int i=4;i<=n;i++){
		f[i]=f[i-1]+f[i-2]+f[i-3];
	}	
	printf("%lld",f[n]);
	return 0;
}

