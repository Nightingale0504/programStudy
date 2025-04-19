#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e4;
int a[maxN+5],n;
signed main(){
	scanf("%lld",&n);
	for (int i=2;i<=n;i++){
		int k=i;
		for (int j=2;j<=i;j++){
			while (k%j==0){
				a[j]++;
				k/=j;
			}
		}
	}
	for (int i=1;i<=maxN;i++){
		if (a[i]!=0){
			printf("%lld %lld\n",i,a[i]);
		}
	}
	return 0;
}

