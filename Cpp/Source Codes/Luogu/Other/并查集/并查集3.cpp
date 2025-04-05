#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int parent[50005];
int n,m,ans;
int t1,t2;
int find(int x){
	return x==parent[x] ? x : (parent[x]=find(parent[x]));
}
void merge(int i,int j){
	parent[find(j)]=find(i);
}
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++){
		parent[i]=i;
	}
	while (m--){
		scanf("%lld%lld",&t1,&t2);
		merge(t1,t2);;
	}
	for (int i=0;i<n;i++){
		if (parent[i]==i){
			ans++;
		}
	}
	printf("%lld",ans);
	return 0;
}

