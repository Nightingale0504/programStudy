#include<bits/stdc++.h> 
using namespace std;
#define maxN 10005
int n,length,ansID,ansID2,i; 
int idList[maxN];
int main(){
	scanf("%d",&n);
	while (scanf("%d",&idList[i])!=EOF){
		i++;
		length++;
	}
	for (i=0;i<length-1;i++){
		for (int j=i+1;j<length;j++){
			if (idList[i]>idList[j]){
				swap(idList[i],idList[j]);
			}
		}
	}
	for (i=1;i<length-1;i++){
		if (idList[i]==idList[i+1]-2){
			ansID=idList[i]+1;
		}
		if (idList[i]==idList[i+1]){
			ansID2=idList[i];
		}
	}
	printf("%d %d",ansID,ansID2);
	return 0;
}

