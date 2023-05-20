#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int n;
	int localTime,luoguTime;
	scanf("%d",&n);
	localTime=5*n;
	luoguTime=11+3*n;
	if (localTime<luoguTime){
		printf("%s","Local");
	}else{
		printf("%s","Luogu");
	}
	return 0;
}

