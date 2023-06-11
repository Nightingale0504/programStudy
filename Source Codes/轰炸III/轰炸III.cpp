#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define int long long
#define maxN 5005
int n,m,x,y,askX,askY;
int ans,last;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	int x1[maxN],x2[maxN],y1[maxN],y2[maxN];
	scanf("%lld%lld%lld%lld",&n,&m,&x,&y);
	for (int i=0;i<x;i++){
		scanf("%lld%lld%lld%lld",&x1[i],&y1[i],&x2[i],&y2[i]);
	}
	for (int i=0;i<y;i++){
		ans=0;
		scanf("%lld%lld",&askX,&askY);
		for (int j=0;j<x;j++){
			if (askX>=x1[j] && askX<=x2[j]){
				if (askY>=y1[j] && askY<=y2[j]){
					ans++;
					last=j;
				}
			}
		}
	}
	if (!ans){
		puts("N");
	}else{
		printf("Y %lld %lld\n",ans,last);
	}
	return 0;
}

