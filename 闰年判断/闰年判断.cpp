#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int x;
	bool p;
	scanf("%d",&x);
	p=(x%400==0) || (x%4==0) && (x%100!=0);
	printf("%d",p);
	return 0;
}

