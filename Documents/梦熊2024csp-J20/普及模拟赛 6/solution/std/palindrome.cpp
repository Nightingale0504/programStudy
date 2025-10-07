#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define ull unsigned long long
#define pp pair<int,int>
#define mp make_pair 
#define fi first
#define se second
const int mod=998244353;
int add(int x,int y){
	return x+y>=mod?x+y-mod:x+y;
}
int dec(int x,int y){
	return x-y<0?x-y+mod:x-y;
}
int qkpow(int a,int b){
	int ans=1,base=a%mod;
	while(b){
		if(b&1)ans=1ll*ans*base%mod;
		base=1ll*base*base%mod;
		b>>=1;
	}
	return ans;
}
int fac[1000005],inv[1000005],Invn[600005];
inline int C(int n,int m){
	if(n<m||m<0)return 0;
	return 1ll*fac[n]*inv[m]%mod*inv[n-m]%mod;
}
void init_C(int n){
	fac[0]=1;
	for(int i=1;i<=n;i++)fac[i]=1ll*fac[i-1]*i%mod; 
	inv[0]=1;
	inv[n]=qkpow(fac[n],mod-2);
	for(int i=n-1;i>=1;i--)inv[i]=1ll*inv[i+1]*(i+1)%mod;
	Invn[0]=Invn[1]=1;
	for(int i=1;i<=200000;i++)Invn[i]=(LL)(mod-mod/i)*Invn[mod%i]%mod;
}  
int n,a[27][27],t[1000005];
LL mn,ans,minans,v[27];
char s[1000005];
LL calc(int x,int y){
	if(x==y)return 0ll;
	return min(v[x],min(v[y],mn));
}
signed main(){
	freopen("palindrome.in","r",stdin);
	freopen("palindrome.out","w",stdout);
	scanf("%d",&n);
	assert(n%2==0);
	mn=1e18;
	for(int i=1;i<=26;i++)scanf("%lld",&v[i]),mn=min(mn,2*v[i]);
	scanf("%s",s+1);
	for(int i=1;i<=n;i++)t[i]=s[i]-'a'+1;
	for(int i=1;i<=n/2;i++)
		a[min(t[i],t[n-i+1])][max(t[i],t[n-i+1])]++;
	for(int i=1;i<=26;i++)
		for(int j=i;j<=26;j++)
			ans+=1ll*calc(i,j)*a[i][j];
	minans=ans;
	for(int i=1;i<=26;i++){
		for(int j=i;j<=26;j++){
			if(a[i][j]){
				a[i][j]--;
				for(int k=1;k<=26;k++){
					for(int l=k;l<=26;l++){
						if(a[k][l]){
							minans=min(minans,ans-calc(i,j)-calc(k,l)+calc(i,l)+calc(j,k));	
							minans=min(minans,ans-calc(i,j)-calc(k,l)+calc(i,k)+calc(j,l));	
						}
					}
				}
				a[i][j]++;
			}
		}
	}
	printf("%lld\n",minans);
	return 0;
} 
/*
6
5 3 2 4 7 6 2 5 1 4 6 2 5 1 4 6 2 5 1 4 6 2 5 1 4 7
abbaaa
*/
