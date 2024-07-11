#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;
#define int long long
const int maxN=5e3+5,maxR=5e3+5;
int n,k,p,u,v,cnt;
int first[maxN],du[maxN],f[maxN];
struct node{
	int to,next;
}edge[maxR];
inline void add(int u,int v){
	cnt++;
	edge[cnt].to=v;
	edge[cnt].next=first[u];
	first[u]=cnt;
}
signed main(){
	scanf("%lld%lld%lld",&n,&k,&p);
	for (int i=1;i<=p;i++){
		scanf("%lld",&f[i]);
	}
	for
	return 0;
}

