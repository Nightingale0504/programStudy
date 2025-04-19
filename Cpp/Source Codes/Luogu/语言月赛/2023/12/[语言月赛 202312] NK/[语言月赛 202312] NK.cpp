#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,k,cnt,tmp=1;
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=0;i<n;i++){
		tmp*=n;
	}
	for (int i=n;i<=tmp;i+=10){
		if (i%10==n && (i%k)%n==0){
			cnt++;
		}
	}
	printf("%lld",cnt);
	return 0;
}

