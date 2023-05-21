#include<iostream>
#include<cstdio>
using namespace std;
int w[105],val[105]; // w - ��� val - ��ֵ 
int dp[105][1005]; // dp[i]=j - ���Ϊi�ı����洢������ֵΪj	 
int main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	int t,m;// t - �������� m - ֲ����� 
    scanf("%d%d",&t,&m);
    for(int i=1;i<=m;i++){
        scanf("%d%d",&w[i],&val[i]);
    }
    // 0-1���� 
    for(int i=1;i<=m;i++){ // ����ֲ�� 
        for(int j=t;j>=0;j--){ // ������������ - �Ӵ�->С 
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


