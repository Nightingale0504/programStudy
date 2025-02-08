#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define ll long long
const ll N=1e4+5,M=1e7+5;
ll n,m,w[N],v[N],f[M];
int main(){
	scanf("%lld%lld",&m,&n);
	for(int i=1;i<=n;i++){
		scanf("%lld%lld",&w[i],&v[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=w[i];j<=m;j++){
			f[j]=max(f[j],f[j-w[i]]+v[i]);
		}
	}
	printf("%lld",f[m]);
	return 0;
}

