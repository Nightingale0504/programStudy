#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e6+5;
int n,k,ans,cnt,a[maxN];
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=0;i<n;i++){
		cnt=0;
		for (int j=i;j<n;j++){
			cnt+=a[j];
			if (cnt%k==0){
				ans++;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}

