#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
const int maxN=1e5+5;
int a,b,x,num[maxN],k=6;
signed main(){
	scanf("%lld%lld",&a,&b);
	for (int i=1;i<=10000;i++){
		num[i]=a*10/b;
		a=a*10%b;
	}
	while (k--){
		scanf("%lld",&x);
		printf("%lld",num[x]);
	}
	return 0;
}

