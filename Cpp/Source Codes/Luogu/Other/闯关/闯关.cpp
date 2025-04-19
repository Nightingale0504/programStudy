#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m;
signed main(){
    #ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=1;i*i<=n;i++){
		if (n%i==0){
			m=m+i+n/i;
		}
	}
	if (pow(sqrt(n),2)==n){
		m-=sqrt(n);
	}
	printf("%lld",m);
	return 0;
}

