#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,a,b,cnt;
signed main(){
	scanf("%lld%lld%lld",&n,&a,&b);
	for (int i=1;i<=n;i++){
		if ((i%a==0 && i%b!=0) || (i%a!=0 && i%b==0)){
			cnt++;
		}
	}
	printf("%lld",cnt);
	return 0;
}

