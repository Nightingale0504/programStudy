#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxN 1000*1000+10
int n,m,k,sum;
int set[maxN];
int a,b;
int find(int x){
	if (set[x]==x){
		return x;
	}else{
		set[x]=find(set[x]);
		return set[x];
	}
}
void merge(int i,int j){
	set[find(j)]=find(i);
}
int main(){
	scanf("%d%d%d",&n,&m,&k);
	for (int i=0;i<n*m;i++){
		set[i]=i;
	}
	while (k--){
		scanf("%d%d",&a,&b);
		merge(a,b);
	}
	for (int i=0;i<n*m;i++){
		if (set[i]==i){
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}

