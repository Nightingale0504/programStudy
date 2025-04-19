#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m;
signed main(){
	scanf("%lld%lld",&n,&m);
	if (m==0){
		printf("NO\n");
		printf("YES\n");
		exit(0);
	}else if (n==0){
		printf("NO\n");
		printf("NO\n");
		exit(0);
	}
	if (n<0){
		if (m%2==0){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
		if (n%2==0){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}else{
		printf("NO\n");
		if (n%2==0){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
	return 0;
}

