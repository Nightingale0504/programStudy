#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,f[5005];
// Template - begin
inline int find(int x){
	return f[x]==x ? x : f[x]=find(f[x]);
}
inline void merge(int x,int y){
	f[find(y)]=find(x);
}
inline void init(int a[],int n){
	for (int i=0;i<n;i++){
		a[i]=i;
	}
}
// Template - end
signed main(){
	scanf("%lld",&n);
	init(f,n);
	
	return 0;
}
