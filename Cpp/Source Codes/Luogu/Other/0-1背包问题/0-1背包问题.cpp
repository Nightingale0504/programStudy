#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n,vol,maxV=-1;
	scanf("%d%d",&n,&vol);
	int weight[n+1],value[n+1],itemList[n+1][vol+1]={{ 0 }};
	weight[0]=0;
	value[0]=0;
	for (int i=1;i<=n;i++){
		scanf("%d%d",&weight[i],&value[i]);
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=vol;j++){
			if (j<weight[i]){
				itemList[i][j]=itemList[i-1][j];
			}else{
				itemList[i][j]=itemList[i-1][j-weight[i]]+value[i];
			}
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=vol;j++){
			maxV=max(maxV,itemList[i][j]);
		}
	}
	printf("%d",maxV);
	return 0;
}


