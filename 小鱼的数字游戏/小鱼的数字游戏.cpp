#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int i,a[110];
	do {
		scanf("%d",&a[++i]);
	} while(a[i]!=0);
	for (int j=i-1;j>=1;j--){
		printf("%d ",a[j]);
	}
	return 0;
}

