#include<bits/stdc++.h> 

#define int long long
using namespace std;
int l,e;
int ans;
signed main(){
	scanf("%lld%lld",&l,&e);
	if (l<3){
		printf("Impossible");
		return 0;
	}
	if (l>=8 || (l>=6 && e==1)){
		ans=3;
	}else{
		ans=6;
	}
	printf("%lld",ans);
	return 0;
}

