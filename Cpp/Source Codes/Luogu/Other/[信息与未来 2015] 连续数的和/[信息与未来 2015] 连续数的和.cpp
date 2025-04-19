#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=7e4+5;
int n,k,sum[maxN],s;
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=1;i<=n;i++){
		sum[i]=sum[i-1]+i;
	}
	for (int i=1;i+k-1<=n;i++){
		int t=sqrt(sum[i+k-1]-sum[i-1]);
		if (t*t==sum[i+k-1]-sum[i-1]){
			s++;
		}
	}
	printf("%lld",s);
	return 0;
}

