#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,num,ans=1;
signed main(){
	scanf("%lld",&n);
	for (int i=2;i*i<=n;i++){
		num=0;
		while (n%i==0){
			num++;
			n/=i;
		}
		if (num&1){
			ans*=i;
		}
	}
	ans*=n;
	printf("%lld",ans);
	return 0;
}

