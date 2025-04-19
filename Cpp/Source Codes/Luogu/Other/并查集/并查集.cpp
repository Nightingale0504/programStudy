#include<bits/stdc++.h> 
using namespace std;
int n,m;
int father[50005];
int t1,t2,sum; 
int main(){
	scanf("%d%d",&n,&m);
	for (int i=0;i<n;i++){
		father[i]=i;
	}
	for (int i=0;i<m;i++){
		scanf("%d%d",&t1,&t2);
		father[t1]=t2;
	}
	for (int i=0;i<n;i++){
		if (father[i]==i){
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}

