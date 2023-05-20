#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int inf=2e9;
const int maxN=55;
int a[maxN],maxNum=-1,minNum=inf;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("%d\n%d",maxNum,minNum);
	return 0;
}

