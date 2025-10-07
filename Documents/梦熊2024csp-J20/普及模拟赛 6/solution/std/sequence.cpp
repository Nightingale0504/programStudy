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
��Ϊ[l,r]֮���ֵ
��Ϊ[0,l-1]��ֵ����Ϊ[0,r]��ֵ ->˫����ת�ɵ����� 
����r-l+1��С������ö��r-l+1 
n�������ֵ(xor)Ϊc,��Ϊx�ķ�����
���ֵcת�ɶ����ƣ������iλ������Ϊ1,˵����һλΪ1��������������
�����iλ������Ϊ0,˵����һλΪ1��������ż����,c�ĵ�iλ������ֵ����g[i]
����a[1],a[2],a[3],...,a[n]��0λ(2^0��һλ)Ϊ1�ĸ�����f[0]��
��1λ(2^1��һλ)Ϊ1�ĸ�����f[1]��
...
��iλ(2^i��һλ)Ϊ1�ĸ�����f[i]��

g[i]��f[i]ģ2��ֵ������ͬ(���) 
(2��i��)*f[i] n�����ĺ� <=x
 ��¼һ�������� 
 f[0]=3,f[1]=2,f[2],...=0
 n=5
 ����5�����У���3����0λΪ1 C[5][3]
 ��2����1λΪ1 C[5][2]
 ��ô���ݳ˷�ԭ�� 
 ��һ�����⣬���Ǽ����Ѿ�֪����f[0],f[1],f[2],...,f[61]��ô�������Ƕ���
  C[n][f[0]] �����
  C[n][f[1]] �����
  C[n][f[2]]
  ����ȷ����f[0],f[1],f[2],...,f[61] 
  ��������ʵ������C[n][f[i]]��˵Ľ��
  
  ��ôȷ�����п��ܵ�f[0],f[1],...,f[61]
  
  f[61]��ʼȷ����Ȼ��ȷ��f[60],f[59],f[58],......
  ������ö��f[61]��Ȩֵ 0~n ��һ��ֵ��������ż�Ժ�g[61]��Ӧ��
  ��һ��Ҫ��f[61]*(2^61)<=x ��Ϊ���>x��˵���Ѿ����Ϸ���
  
  
Ҫ��:g[i]��f[i]ģ2��ֵ������ͬ(���) 
(2��i��)*f[i] n�����ĺ� <=x

(2^0)*f[0]+(2^1)*f[1]+...+(2^61)*f[61]<=x->dp[62][x]

(2^0)*f[0]+(2^1)*f[1]+...+(2^(i-1))*f[i-1]<=j ����������Ǽ���dp[i][j]
���� 
��������C[n][f[i]]��˵Ľ��
�ݹ��˼��
���dp[62]ת�Ƶ�dp[61] 
(2^0)*f[0]+(2^1)*f[1]+...+(2^61)*f[61]<=x
�������֪��f[61]��Ȩֵ
 (2^0)*f[0]+(2^1)*f[1]+...<=x-(2^61)*f[61]
 ��dp[62][x]�����dp[61][x-(2^61)*f[61]] 
   ��ö��f[61]��ֵ��������Ҫ��g[61]����ż�Զ�Ӧ��
(2^0)*f[0]+(2^1)*f[1]+...+(2^60)*f[60]<=j��һ������dp[61][j]
ö��f[60]��ֵ
(2^0)*f[0]+(2^1)*f[1]+...<=j-(2^60)*f[60]
dp[61][j]->dp[60][j-(2^60)*f[60]]
֪��������dp[60]
ö��f[59]
dp[60][j]->dp[59][j-(2^59)*f[59]] 
 dp[61][x]�����dp[60][x-(2^60)*f[60]] 
   dp[62][x]
    (2^0)*f[0]+(2^1)*f[1]+...<=x-(2^61)*f[61]
   ö��f[61]��ֵ����Ϊc
   x->x-(2^61)*c
   dp[62][x]*C[n][c]->dp[61][x-(2^61)*c] 
   
   DP�ĳ���˼�룬dp[i][j]��ʾ������61,60,59,...i��Щλ�����ǵ�f��ż�Է���Ҫ��
   ����j-(2^61)*f[61]-(2^60)*f[60]-(2^59)*f[59]-(2^58)*f[58]-(2^i)*f[i]=j�����з�����
   C[n][f[61]]*C[n][f[60]]*...*C[n][f[i]] ��Ȩֵ�� 
   ��ô����ת��
   ö��f[i-1]��ֵ����Ϊc,��������c����ż�Ժ�g[i-1]��Ӧ��
   dp[i][j]*C[n][c]->dp[i-1][(2^(i-1))*c] 
   
   
   ���Ż�j��һά̫����
   dp[i][j]���״̬
   ���j>=(2^i-1)*n
   �����൱��f[0],f[1],f[2],f[3],...,f[i-1]��ȡn����������
   Ȩֵ֮�ͻ��Ǳ�jС����ô˵��f[0],f[1],...,f[i-1]ֻҪ��ż������Ϳ�����ȡ 
   
   dp[i][j] ���»ص����� 
   (2^0)*f[0]+(2^1)*f[1]+...+(2^(i-1))*f[i-1]<=j �����ݹ�ķ��� 
   �������ʽ�ӵ����ֵ
   f[0]=f[1]=f[2]=...=f[i-1]=n��ʱ�����ȡ���,��ʱ���Ȩֵ��Ϊ(2^i-1)*n
   ���һ������j>=(2^i-1)*n�����������ʱ��Ҫ��˵��f[]������ȡ 
   g����ż��Ҫ��Ӧ�� 
   dp[2][30],n=5
   ���������f[0]=n,f[1]=n���ʱ���Ȩֵ֮�������
   (2^0)*n+(2^1)*n=15<30
    (2^2-1)*n<=j
    ���Ϊһ�ּ�֦ 
    ��Ԥ�����G[x]��ʾf[0]ȡ�˺�g[0]��ż����ͬ,f[1]ȡ�˺�g[1]��ż����ͬ...
	f[x]��g[x]��ż����ͬ�����������C[n][f[0]]*...*C[x][f[x]]�ĳ˻�֮�����Ǽ���G[x]
	 j>=(2^i-1)*n ��ʵ���ü���ת����ȥ�ˣ�ֻҪֱ�ӰѴ𰸼���
	 ans+=f[i][j]*G[i]�Ϳ����� 
	 
	f[i]++ ��ᷢ��x�ͻ����(2^i)
	(2^i)*f[i]+2^(i+1)*f[i+1]+...(2^61)*f[61]����һ����2^i�ı��� ����Ȼ�� 
	j>=(2^i-1)*n
	ans+=dp[i][j]*G[i]
	return
	[0,(2^i-1)*n) �е���Щ��
	 ǰ���ȥ������2^i�ı�����Ҳ����˵��������dp[i][j]��0��λ��,j���ٲ���(2^i) 
	 
*/
