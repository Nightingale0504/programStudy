#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
#define maxN 20005
int n,b,h[maxN];
int ans,k;
int cmp(int x,int y){
	return x>y;
}
signed main(){
	scanf("%lld%lld",&n,&b);
	for (int i=0;i<n;i++){
		scanf("%lld",&h[i]);
	}
	sort(h,h+n,cmp);
	for (int i=0;i<n;i++){
		if (k>b){
			break;
		}
		k+=h[i];
		ans++;
	}
	printf("%lld",ans);
	return 0;
}

