#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	int a[3];
	for (int i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+3);
	for (int i=0;i<3;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

