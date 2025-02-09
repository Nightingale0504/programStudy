#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,tmp,minNum=1e6,maxNum=1e-6,ans;
int main(){
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&tmp);
		minNum=min(minNum,tmp);
		maxNum=max(maxNum,tmp);
	}
	ans=maxNum-minNum;
	printf("%d",ans);
	return 0;
}

