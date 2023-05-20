#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	printf("%d\n",n>>m);
	printf("%d\n",n<<m);
	return 0;
}

