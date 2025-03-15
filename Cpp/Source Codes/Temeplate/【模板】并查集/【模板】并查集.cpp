#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=5e3+5;
int f[maxN]; 
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
	init(f,n);
	return 0;
}

