#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,k,w,sum; 
signed main(){
	scanf("%lld%lld%lld",&k,&n,&w);
	for (int i=1;i<=w;i++){
		sum+=k*i;
	}
	sum-=n;
	if (sum<=0){
		printf("0");
	}else{
		printf("%lld",sum);
	}
	return 0;
}

