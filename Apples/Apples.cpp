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
	scanf("%d",&x);
	printf("%s%d%s","Today, I ate ",x," apple");
	if (x!=0 && x!=1){
		printf("%c",'s');
	}
	printf("%c",'.');
	return 0;
}

