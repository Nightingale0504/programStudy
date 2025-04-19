#include<bits/stdc++.h> 
using namespace std;
#define int long long
int a,x;
signed main(){
	scanf("%lld",&a);
	if (a==0){
		x=0;
	}else{
		x=ceil((a/10.0)*(a/10.0));
	}
	printf("%lld",x);
	return 0;
}

