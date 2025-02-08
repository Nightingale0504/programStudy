#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,m;
int a[55][55];
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++){
		for (int i=0;i<m;i++){
			scanf("%lld",&a[i]);
		}
	}
	
	return 0;
}

