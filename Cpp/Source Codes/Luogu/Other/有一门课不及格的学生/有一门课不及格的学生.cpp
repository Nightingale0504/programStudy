#include<bits/stdc++.h> 
using namespace std;
#define int long long
int c,m,e,ans;
signed main(){
	scanf("%lld%lld%lld",&c,&m,&e);
	if (c<60){
		ans++;
	}
	if (m<60){
		ans++;
	}
	if (e<60){
		ans++;
	}
	if (ans==1){
		printf("1");
	}else{
		printf("0");
	}
	return 0;
}

