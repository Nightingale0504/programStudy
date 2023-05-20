#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,ans=-0x7fffffff,a[100005];
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		a[i]=max(a[i],a[i]+a[i-1]);
		ans=max(a[i],ans);
	}
	printf("%d\n",ans);
	return 0;
}

