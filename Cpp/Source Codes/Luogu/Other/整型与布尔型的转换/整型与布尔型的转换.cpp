#include<bits/stdc++.h> 
using namespace std;
#define int long long
int x,ans;
inline int judge(int n){
	if (n==0){
		return 0;
	}else{
		return 1;
	}
}
signed main(){
	scanf("%lld",&x);
	ans=judge(x);
	printf("%lld",ans);
	return 0;
}

