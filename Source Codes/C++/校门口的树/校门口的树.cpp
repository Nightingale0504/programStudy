#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct area{
	int startingCoordinates;
	int endingCoordinates;
};
int main(){
	int length,number,n=0;
	scanf("%d%d",&length,&number);
	int trees[10000];
	for (int i=0;i<=length;i++){
		trees[i]=0;
	}
	area areas[110];
	for (int i=0;i<number;i++){
		scanf("%d",&areas[i].startingCoordinates);
		scanf("%d",&areas[i].endingCoordinates);
		for (int j=areas[i].startingCoordinates;j<=areas[i].endingCoordinates;j++){
			trees[j]++;
		}
	}
	for (int i=0;i<=length;i++){
		if (trees[i]==0){
			n++;
		}
	}
	printf("%d",n);
	return 0;
}


