#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,tmp;
signed main(){
	scanf("%lld",&n);
	if (n==1){
		scanf("%lld",&tmp);
		printf("%lld",tmp);
		return 0;
	}
	for (int i=1;i<=n;i++){
		scanf("%lld",&tmp);
		if (i==n){
			printf("%lld",tmp);
		}else{
			printf("%lld,",tmp);
		}
	}
	return 0;
}

