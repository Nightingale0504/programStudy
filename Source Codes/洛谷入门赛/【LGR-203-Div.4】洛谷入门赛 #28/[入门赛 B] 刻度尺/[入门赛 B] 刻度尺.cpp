#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,a,b;
int l,r;
signed main(){
	scanf("%lld %lld %lld",&n,&a,&b);
	l=a-b;
	r=a+b;
	if (l<0){
		printf("%lld",r);
	}else if (r>0){
		printf("%lld",l);
	}else if (l==r){
		printf("%lld",a);
	}else{
		printf("%lld %lld",l,r);
	}
	return 0;
}

