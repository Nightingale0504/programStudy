#include<bits/stdc++.h> 
using namespace std;
const int inf=2e9;
const int maxN=55;
int a[maxN],maxNum=-1,minNum=inf;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("%d\n%d",maxNum,minNum);
	return 0;
}

