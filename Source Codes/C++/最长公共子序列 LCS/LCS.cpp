#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxN=1010; 
int main(){
	int dp[maxN][maxN];
	string s,p;
	int q;
	scanf("%d",&q);
	while(q--){
		scanf("%s%s",&s,&p);
		int a=s.size(),b=p.size();
		for(int i=1;i<=a;i++){
			dp[i][0]=0;
		}
		for(int i=1;i<=b;i++){
			dp[0][i]=0;
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(s[i]==p[j]){
					dp[i+1][j+1]=dp[i][j]+1;
				}
				else{
					dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);
				}
			}
		}
		printf("%d\n",dp[a][b]);
	}
	return 0;
}

