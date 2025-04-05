#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int cnt;
int ans[1500],start,final;
int main(){
	scanf("%d%d",&start,&final);
	for (int i=start;i<=final;i++){
		bool ly=(i%4==0 && i%100!=0) || i%400==0;
		if (ly){
			ans[cnt++]=i;
		}
	}
	printf("%d\n",cnt);
	for (int i=0;i<cnt;i++){
		printf("%d ",ans[i]);
	}
	printf("\n");
	return 0;
}

