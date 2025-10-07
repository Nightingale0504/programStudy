#include<cmath>
#include<cstdio>
#include<cstring>
#include<queue>
#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define LL long long
#define int long long
const int mod=998244353;
int mul(int a,int b){return 1ll * a * b % mod;}
int dec(int a,int b){return a >= b ? a - b : a + mod - b;}
int add(int a,int b){return a + b >= mod ? a + b - mod : a + b;}
int qkpow(int a,int b){
	if(a==0)return 0;
	int ans=1,base=a;
	while(b){
		if(b&1)ans=mul(ans,base);
		base=mul(base,base);
		b>>=1;
	}
	return ans;
}
LL m,tot,qS[65],cnt[65],a[100005];
int n,ans;
bool f[65];
void solve(){
	ans=0;
	for(int i=0;i<=62;i++){
		if((1ll<<i)&m)f[i]=1;
		else f[i]=0;
	}
	qS[0]=cnt[0];
	for(int i=1;i<=62;i++)qS[i]=qS[i-1]+1ll*((1ll<<i)*cnt[i]);
	LL S=0;
	for(int i=0;i<=62;i++){
		if(f[i]){
			if((1ll<<i)>qS[i]-S){
				bool f=0;
				for(int j=i+1;j<=62;j++){
					if(cnt[j]){
						f=1;
						ans+=j-i;
						cnt[j]--,cnt[i]+=2;
						for(int k=i+1;k<j;k++)cnt[k]++;
						break;
					}
				}
				if(!f){
					puts("-1");
					return ;
				}
			}
			qS[0]=cnt[0];
			for(int j=1;j<=62;j++)qS[j]=qS[j-1]+1ll*((1ll<<j)*cnt[j]);
			S+=(1ll<<i);
		}
	}
	printf("%d\n",ans);
}
int t;
signed main(){ 
//	freopen("cake.in","r",stdin);
//	freopen("cake.out","w",stdout);
	t=1;
	while(t--){
		scanf("%lld %d",&m,&n);
		tot=0;
		memset(cnt,0,sizeof cnt);
		for(int i=1;i<=n;i++)scanf("%lld",&a[i]),tot+=a[i];
		int ans1=0,ans2=0;
		if(tot<m){
			puts("-1");
			continue;
		}
		for(int i=1;i<=n;i++){
			LL x=a[i];
			int res=0;
			while(x!=1){
				x/=2;
				res++;
			}
			cnt[res]++;
		} 
		solve();	
	}
	return 0;
    
} 
/*
¿¼ÂÇ 
*/
