#include<bits/stdc++.h> 
using namespace std;
#define int long long
int lucky,encourage;
signed main(){
	scanf("%lld%lld",&lucky,&encourage);
	if (lucky>=10 || encourage>=20){
		printf("1");
	}else{
		printf("0");
	}
	return 0;
}

