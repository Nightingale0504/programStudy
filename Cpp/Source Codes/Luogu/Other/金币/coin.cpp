#include<bits/stdc++.h> 
using namespace std;
int main(){
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

