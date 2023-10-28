#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int l,r,tmp,s=0;
	scanf("%d%d",&l,&r);
	for (int i=l;i<=r;i++){
		tmp=i;
		if (tmp%10==2){
			s++;
		}
		while (tmp/=10){
			if (tmp%10==2){
				s++;
			}
		}
	} 
	printf("%d",s);
	return 0;
}


