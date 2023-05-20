#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int n;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=i;j++){
			long long pos=pow(i,j);
			printf("%d ^ %d = %lld ",i,j,pos);
		}
		printf("\n");
	}
	return 0;
}

