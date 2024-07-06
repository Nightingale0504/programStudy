#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int m,k,x=0,tmp;
	scanf("%d%d",&m,&k);
	tmp=m;
	for (int i=0;m>=10;i++){
		if (m%10==3){
			x++;
		}
		m/=10;
	}
	if (tmp%19==0 && x==k){
		printf("%s","YES");
	}else{
		printf("%s","NO");
	}
	return 0;
}


