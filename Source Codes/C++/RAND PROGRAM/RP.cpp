#include<iostream>
#include<cstdio>
#include<algorithm>
#include<ctime>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	int n,ans=0;
	scanf("%d",&n);
	srand(time(0));
	ans=rand()%n;
	printf("%d",ans);
	return 0;
}

