#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	int k;
	scanf("%d",&k);
	if (k>2){
		printf("Survivor");
	}else if (k==2){
		printf("Tie");
	}else if (k<2){
		printf("Hunter");
	}
	return 0;
}

