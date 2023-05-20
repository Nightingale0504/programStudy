#include<iostream>
#include<cstdio>
using namespace std;
int w[105],val[105]; // w - 体积 val - 价值 
int dp[105][1005]; // dp[i]=j - 体积为i的背包存储的最大价值为j	 
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int t,m;// t - 背包容量 m - 植物个数 
    scanf("%d%d",&t,&m);
    for(int i=1;i<=m;i++){
        scanf("%d%d",&w[i],&val[i]);
    }
    // 0-1背包 
    for(int i=1;i<=m;i++){ // 遍历植物 
        for(int j=t;j>=0;j--){ // 遍历背包容量 - 从大->小 
            if(j>=w[i]){
                dp[i][j]=max(dp[i-1][j-w[i]]+val[i],dp[i-1][j]);
            }  
            else{
                dp[i][j]=dp[i-1][j];
            }              
        }
    }
    printf("%d",dp[m][t]);
	return 0;
}


