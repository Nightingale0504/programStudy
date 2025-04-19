#include<bits/stdc++.h> 
using namespace std;
#define int long long
int s[25],n,m,maxSum;
void stat(int a[],int m){
	int maxScore=0,minScore=10,sum=0;
	for (int i=0;i<m;i++){
		maxScore=max(a[i],maxScore);
		minScore=min(a[i],minScore);
		sum+=a[i];
	}
	maxSum=max(maxSum,sum-maxScore-minScore);
}
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			scanf("%lld",&s[j]);
		}
		stat(s,m);
	}
	printf("%.2f",double(maxSum)/(m-2));
	return 0;
}

