#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define pp pair<int,int>
#define mp make_pair 
#define ull unsigned long long
const int mod=1e9+7;
inline int add(int x,int y){
	return x+y>=mod?x+y-mod:x+y;
}
inline int dec(int x,int y){
	return x-y<0?x-y+mod:x-y;
}
inline int mul(int x,int y){
	return 1ll*x*y%mod;
}
inline int qkpow(int a,int b){
	if(b<0)return 0;
	int ans=1,base=a%mod;
	while(b){
		if(b&1)ans=1ll*ans*base%mod;
		base=1ll*base*base%mod;
		b>>=1;
	}
	return ans;
}
int fac[1000005],inv[1000005],Invn[600005];
inline int binom(int n,int m){
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
int n,dp[65][1005][2],tmp[65];
LL l,r,z;
int calc(int n,LL r){
	memset(dp,0,sizeof dp);
	memset(tmp,0,sizeof tmp);
	int now=0;
	while(r){
		tmp[now]=r%2;
		r/=2,now++;
	}
	int fk=z%2;
	for(int i=fk;i<=n;i+=2){
		int tag=(i%2<=tmp[0]);
		dp[0][i/2][tag]=binom(n,i);
	}
	for(int w=0;w<60;w++){
		for(int i=0;i<=n;i++){
			for(int j=0;j<=1;j++){
				int fk=(z>>(w+1))&1;
				for(int k=fk;k<=n;k+=2){
					int tag=((i+k)%2<tmp[w+1])||((i+k)%2==tmp[w+1]&&j);
					dp[w+1][(i+k)/2][tag]=add(dp[w+1][(i+k)/2][tag],1ll*dp[w][i][j]*binom(n,k)%mod);
				}
			}
		}
	}
	int res=0;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=1;j++){
			int x=i,now=61,tag=j;
			while(x){
				int num=(x%2);
				tag=(num<tmp[now])||(num==tmp[now]&&tag);
				x/=2,now++;
			}
			if(tag)res=add(res,dp[60][i][j]);
		}
	}
	return res;
}
signed main(){
	freopen("sequence.in","r",stdin);
	freopen("sequence.out","w",stdout);
	init_C(1000);
	cin>>n>>l>>r>>z;
	cout<<dec(calc(n,r),calc(n,l-1))<<endl;
	return 0;
}
/*
和为[l,r]之间的值
和为[0,l-1]的值，和为[0,r]的值 ->双变量转成单变量 
除非r-l+1很小，可以枚举r-l+1 
n个数异或值(xor)为c,和为x的方案数
异或值c转成二进制，如果第i位二进制为1,说明这一位为1的数字有奇数个
如果第i位二进制为0,说明这一位为1的数字有偶数个,c的第i位二进制值记作g[i]
假设a[1],a[2],a[3],...,a[n]第0位(2^0这一位)为1的个数有f[0]个
第1位(2^1这一位)为1的个数有f[1]个
...
第i位(2^i这一位)为1的个数有f[i]个

g[i]和f[i]模2的值必须相同(异或) 
(2的i次)*f[i] n个数的和 <=x
 记录一个方案数 
 f[0]=3,f[1]=2,f[2],...=0
 n=5
 在这5个数中，有3个第0位为1 C[5][3]
 有2个第1位为1 C[5][2]
 那么根据乘法原理 
 第一个问题，我们假设已经知道了f[0],f[1],f[2],...,f[61]那么方案数是多少
  C[n][f[0]] 组合数
  C[n][f[1]] 组合数
  C[n][f[2]]
  对于确定的f[0],f[1],f[2],...,f[61] 
  方案数其实是所有C[n][f[i]]相乘的结果
  
  怎么确定所有可能的f[0],f[1],...,f[61]
  
  f[61]开始确定，然后确定f[60],f[59],f[58],......
  我们先枚举f[61]的权值 0~n 的一个值，并且奇偶性和g[61]对应上
  第一个要求f[61]*(2^61)<=x 因为如果>x，说明已经不合法了
  
  
要求:g[i]和f[i]模2的值必须相同(异或) 
(2的i次)*f[i] n个数的和 <=x

(2^0)*f[0]+(2^1)*f[1]+...+(2^61)*f[61]<=x->dp[62][x]

(2^0)*f[0]+(2^1)*f[1]+...+(2^(i-1))*f[i-1]<=j 这个东西我们记作dp[i][j]
定义 
方案是有C[n][f[i]]相乘的结果
递归的思想
想从dp[62]转移到dp[61] 
(2^0)*f[0]+(2^1)*f[1]+...+(2^61)*f[61]<=x
如果我们知道f[61]的权值
 (2^0)*f[0]+(2^1)*f[1]+...<=x-(2^61)*f[61]
 从dp[62][x]变成了dp[61][x-(2^61)*f[61]] 
   先枚举f[61]的值，它首先要和g[61]的奇偶性对应上
(2^0)*f[0]+(2^1)*f[1]+...+(2^60)*f[60]<=j的一个方案dp[61][j]
枚举f[60]的值
(2^0)*f[0]+(2^1)*f[1]+...<=j-(2^60)*f[60]
dp[61][j]->dp[60][j-(2^60)*f[60]]
知道了所有dp[60]
枚举f[59]
dp[60][j]->dp[59][j-(2^59)*f[59]] 
 dp[61][x]变成了dp[60][x-(2^60)*f[60]] 
   dp[62][x]
    (2^0)*f[0]+(2^1)*f[1]+...<=x-(2^61)*f[61]
   枚举f[61]的值假设为c
   x->x-(2^61)*c
   dp[62][x]*C[n][c]->dp[61][x-(2^61)*c] 
   
   DP的初步思想，dp[i][j]表示考虑了61,60,59,...i这些位，它们的f奇偶性符合要求
   并且j-(2^61)*f[61]-(2^60)*f[60]-(2^59)*f[59]-(2^58)*f[58]-(2^i)*f[i]=j的所有方案中
   C[n][f[61]]*C[n][f[60]]*...*C[n][f[i]] 的权值和 
   怎么进行转移
   枚举f[i-1]的值假设为c,首先满足c的奇偶性和g[i-1]对应上
   dp[i][j]*C[n][c]->dp[i-1][(2^(i-1))*c] 
   
   
   做优化j这一维太大了
   dp[i][j]这个状态
   如果j>=(2^i-1)*n
   就是相当于f[0],f[1],f[2],f[3],...,f[i-1]都取n的情况下如果
   权值之和还是比j小，那么说明f[0],f[1],...,f[i-1]只要奇偶性满足就可以任取 
   
   dp[i][j] 重新回到定义 
   (2^0)*f[0]+(2^1)*f[1]+...+(2^(i-1))*f[i-1]<=j 继续递归的方案 
   考虑左边式子的最大值
   f[0]=f[1]=f[2]=...=f[i-1]=n的时候左边取最大,这时候的权值和为(2^i-1)*n
   如果一旦发现j>=(2^i-1)*n，比左边最大的时候还要大，说明f[]可以任取 
   g的奇偶性要对应上 
   dp[2][30],n=5
   极端情况下f[0]=n,f[1]=n这个时候的权值之和是最大
   (2^0)*n+(2^1)*n=15<30
    (2^2-1)*n<=j
    理解为一种剪枝 
    先预处理出G[x]表示f[0]取了和g[0]奇偶性相同,f[1]取了和g[1]奇偶性相同...
	f[x]和g[x]奇偶性相同的所有情况中C[n][f[0]]*...*C[x][f[x]]的乘积之和我们记作G[x]
	 j>=(2^i-1)*n 其实不用继续转移下去了，只要直接把答案加上
	 ans+=f[i][j]*G[i]就可以了 
	 
	f[i]++ 你会发现x就会减少(2^i)
	(2^i)*f[i]+2^(i+1)*f[i+1]+...(2^61)*f[61]首先一定是2^i的倍数 很显然的 
	j>=(2^i-1)*n
	ans+=dp[i][j]*G[i]
	return
	[0,(2^i-1)*n) 中的这些数
	 前面减去的数是2^i的倍数，也就是说任意两个dp[i][j]≠0的位置,j至少差了(2^i) 
	 
*/
