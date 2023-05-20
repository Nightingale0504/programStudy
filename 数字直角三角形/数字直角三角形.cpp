#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int cnt=0,n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n-i+1;j++){
			printf("%02d",++cnt);
		}
		printf("\n");
	}
	return 0;
}

