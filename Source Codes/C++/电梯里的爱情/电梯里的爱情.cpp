#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,front,t,s,l,c;
int a[1000005];
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	front=1;
	sort(a+1,a+n+1);
	while (front!=n+1){
		c=a[front]-a[front-1];
		if (c==0){
			t++;
		}else{
			t+=(c*6+6);
		}
		front++;
	}
	t+=a[front-1]*4;
	printf("%lld",t);
	return 0;
}

