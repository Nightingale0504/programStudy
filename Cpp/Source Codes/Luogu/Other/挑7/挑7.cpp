#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,ans;
bool F(int x){
	if (x%7==0){
		return true;
	}
	while (x!=0){
		if (x%10==7){
			return false;
		}
		x/=10;
	}
	return false;
}
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		if (F(i)){
		   ans++;
		}
	}
	printf("%lld",ans);
	return 0;
}

