#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct score{
	int basic,page;
	int final;
	void calcFinalScore(){
		if (page<16){
			final=basic-10;
		}else if (page>20){
			final=basic-(page-20);
		}else{
			final=basic;
		}
	}
}a[1005];
int t;
int main(){
	scanf("%d",&t);
	for (int i=0;i<t;i++){
		scanf("%d",&a[i].basic);
		scanf("%d",&a[i].page);
		a[i].calcFinalScore();
	}
	for (int i=0;i<t;i++){
		if (a[i].final<=0){
			printf("%d\n",0);
			continue;
		}
		printf("%d\n",a[i].final);
	}
	return 0;
}

