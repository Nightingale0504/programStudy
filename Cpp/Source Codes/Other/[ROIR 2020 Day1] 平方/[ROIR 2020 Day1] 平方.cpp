#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,x;
signed main(){
	scanf("%lld",&n);
	if (n==0){
		printf("Yes\n1 1");
	}else if (n==1 || n==4){
		printf("No");
	}else if (n%2==1){
		printf("Yes\n%lld %lld",(n+1)/2,(n-1)/2);
	}else{
		if ((n/2)%2==1){
			printf("No");
		}else{
			x=n/2;
			printf("Yes\n%lld %lld",(x+2)/2,(x-2)/2);
		}
	}
	return 0;
}

