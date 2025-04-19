#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,ans;
inline int f(int x){
	if (x==1){
		return 1;
	}
	return x*f(x-1);
} 
signed main(){
	scanf("%lld",&n);
	ans=f(n);
	printf("%lld",ans);
	return 0;
}

