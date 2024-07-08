#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
const int maxN=2e5+5;
int n,tmp,ans,t;
int a[maxN];
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1,cmp);
	if (n&1){
		tmp=n/2+1;
	}else{
		tmp=n/2;
	}
	for (int i=1;i<=tmp;i++){
		if (a[i]<0){
			break;
		}
		ans+=a[i];
	}
	printf("%lld",ans);
	return 0;
}

