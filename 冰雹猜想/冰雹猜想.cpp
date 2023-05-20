#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
void write(int n){
	if(n==1){
		printf("%d",1);
		return;
	}
	if (n%2==1){
		write(n*3+1);
	}else{
		write(n>>1);
	}
	printf(" %d",n);
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int n;
	scanf("%d",&n);
	write(n);
	return 0;
}

