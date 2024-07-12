#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a;
signed main(){
	scanf("%lld",&a);
	if (a<=100){
		printf("100");
	}else if (a<=150){
		printf("150");
	}else if (a<=300){
		printf("300");
	}else if (a<=400){
		printf("400");
	}else if (a<=1000){
		printf("1000");
	}
	return 0;
}

