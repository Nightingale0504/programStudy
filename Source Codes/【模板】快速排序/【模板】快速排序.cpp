#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxN 100005
int n,a[maxN];
int main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	for (int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

