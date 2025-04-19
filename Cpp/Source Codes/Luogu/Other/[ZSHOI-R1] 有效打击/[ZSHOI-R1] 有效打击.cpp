#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=5*1e6+5;
const int maxM=5*1e6+5;
int n,m;
int A[maxN],B[maxM];
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++){
		scanf("%lld",&A[i]);
	}
	for (int i=0;i<m;i++){
		scanf("%lld",&B[i]);
	}
	printf("%lld",n);
	return 0;
}

