#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=5e3+5;
int n,m,a[maxN];
int j=1,k;
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	while (m--){
		k=a[j]%n;
		if (j-k<0){
			j=n+j-k;
		}else{
			j-=k;
		}
		if (j==0){
			j=n;
		}
	}
	printf("%lld",j);
	return 0;
}

