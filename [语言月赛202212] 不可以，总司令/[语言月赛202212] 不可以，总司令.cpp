#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int x,y; 
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	scanf("%d%d",&x,&y);
	if (x>y){
		printf("NO");
	}else if (x<y){
		printf("YES");
	}else{
		printf("equal probability");
	}
	return 0;
}

