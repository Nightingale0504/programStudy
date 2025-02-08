#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1005;
int f[maxN],n;
int prime[maxN],cnt,k;
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=2;i<=n;i++){
		if (f[i]==0){
			for (int j=i;j<=n;j+=i){
				if (f[j]==0){
					f[j]=1;
					cnt++;
					if (cnt==k){
						printf("%lld",j);
						return 0;
					}
				}
			}
		}
	}
	return 0;
}

