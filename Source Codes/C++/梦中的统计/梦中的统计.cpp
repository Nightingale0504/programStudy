#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int js[10],n,m;
int main(){
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++){
		for(int tmp=i;tmp;tmp/=10){
			js[tmp%10]++;
		} 
	}
	for(int i=0;i<=9;i++){
		printf("%d ",js[i]);
	}
	return 0;
}

