#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxK=305;
int n,k,ans;
int c[maxK];
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=1;i<=k;i++){
		scanf("%lld",&c[i]);
	}
	sort(c+1,c+k+1);
	for (int i=k;i>=1;i--){
		ans+=c[i]*(n-1);
		n-=2;
		if (n<=0){
			break;
		}
	}
	printf("%lld",ans);
	return 0;
}

