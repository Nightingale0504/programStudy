#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a,b;
signed main(){
	scanf("%lld%lld",&a,&b);
	if (b>=a){
		return printf("0")&0;
	}
	if ((a-b)%100==0){
		printf("%lld",(a-b)/100);
	}else{
		printf("%lld",(a-b)/100+1);
	}
	return 0;
}

