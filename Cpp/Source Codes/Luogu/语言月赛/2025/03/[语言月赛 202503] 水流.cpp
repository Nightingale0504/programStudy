#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a,b,c;
signed main(){
	scanf("%lld%lld%lld",&a,&b,&c);
	if (a==b){
		printf("None");
	}else if (a>b){
		if (a>c){
			printf("LeftToRight");
		}else{
			printf("None");
		}
	}else{
		if (b>c){
			printf("RightToLeft");
		}else{
			printf("None");
		}
	}
	return 0;
}

