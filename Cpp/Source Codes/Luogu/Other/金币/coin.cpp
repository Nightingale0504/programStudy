#include<bits/stdc++.h> 
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("coin.in","r",stdin);
		freopen("coin.out","w",stdout);
	#endif
	int k,coinNum=0,tmp=1,i;
	scanf("%d",&k);
	for (i=1;i<=k;i++){
		k-=i;
		coinNum+=pow(tmp,2);
		tmp++;
	}
	printf("%d",coinNum+k*tmp);
	return 0;
}

