#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a,b,c,t,ans;
signed main(){
	for (int i=0;i<8;i++){
		scanf("%lld",&t);
		a+=t;
	}
	if (a>=80){
		for (int i=0;i<4;i++){
			scanf("%lld",&t);
			b+=t;
		}
	}
	if (b>=40){
		for (int i=0;i<3;i++){
			scanf("%lld",&t);
			c+=t;
		}
	}
	ans=a+b+c;
	printf("%lld",ans);
	return 0;
}

