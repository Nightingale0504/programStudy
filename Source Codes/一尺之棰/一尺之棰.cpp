#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	int a,days=1;
	scanf("%d",&a);
	while (a>1){
		days++;
		a/=2;
	}
	printf("%d",days);
	return 0;
}

