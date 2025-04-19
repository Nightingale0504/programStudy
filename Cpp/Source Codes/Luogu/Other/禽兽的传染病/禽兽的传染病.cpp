#include<bits/stdc++.h> 
using namespace std;
#define int long long
int x,n;
int ksm(int x,int y){
	int ans=1;
	while (y){
		if (y&1){
			ans*=x;
		}
		x*=x;
		y>>=1;
	}
	return ans;
}
signed main(){
	scanf("%lld%lld",&x,&n);
	printf("%lld",ksm(x+1,n));
	return 0;
}

