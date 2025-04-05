#include<iostream>
#include<cstdio>
#include<climits>
#include<algorithm>
using namespace std;
int n,a[10005],dp[10005],mmax=INT_MIN;
int main(){
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    fill(dp+1,dp+n+1,1);
    for (int i=1;i<=n;i++){
        for (int j=1;j<i;j++){
        	if (a[i]>a[j]){
        		dp[i]=max(dp[i],dp[j]+1);
			}
        }
    }
    for (int i=1;i<=n;i++){
    	mmax=max(mmax,dp[i]);
	}
	printf("%d\n",mmax);
}
