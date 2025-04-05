#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
int a,b;
signed main(){
	scanf("%lld%lld",&a,&b);
	if ((a<b || b==1) && a!=1){
		printf("Brilliant");
	}else if ((a>b || a==1) && b!=1){
		printf("Awesome");
	}else{
		printf("Draw");
	}
	return 0;
}

