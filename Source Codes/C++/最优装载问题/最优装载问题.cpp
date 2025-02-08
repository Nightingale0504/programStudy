#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int c,n,w[10005];
int ans,k;
signed main(){
	scanf("%lld%lld",&c,&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&w[i]);
	}
	sort(w,w+n);
	for (int i=0;i<n;i++){
		if (k+w[i]>c){
			break;
		}
  		k+=w[i];
		ans++;
	}
	printf("%lld",ans);
	return 0;
}

