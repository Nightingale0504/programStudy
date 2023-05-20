#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int n,k;
	int sum[2];
	scanf("%d%d",&n,&k);
	for (int i=k;i<=n;i+=k){
		sum[0]+=i;
	}
	sum[1]=(1+n)*n/2-sum[0];
	printf("%.1f ",double(sum[0])/(n/k));
	printf("%.1f",double(sum[1])/(n-n/k));
	return 0;
}

