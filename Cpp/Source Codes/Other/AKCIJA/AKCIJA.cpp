#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,a[100005],ans;
int cmp(int a,int b){
	return a>b;
}
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1,cmp);
	for (int i=3;i<=n;i+=3){
		a[i]=0;
	}
	for (int i=1;i<=n;i++){
		ans+=a[i];
	}
	printf("%lld\n",ans);
	return 0;
}

