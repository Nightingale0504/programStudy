#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int n,tmp,minNum;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&tmp);
		minNum=min(minNum,tmp);
	}
	printf("%d",minNum);
	return 0;
}

