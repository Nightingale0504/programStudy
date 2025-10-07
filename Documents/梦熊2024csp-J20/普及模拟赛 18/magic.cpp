#include <bits/stdc++.h>
using namespace std;
// using ll = long long;
#define ll long long
const int mod = 998244353;

int add(int a, int b) { return (a + b) >= mod ? a + b - mod : a + b; }
int sub(int a, int b) { return (a - b) < 0 ? a - b + mod : a - b; }
int mul(long long a, long long b) { return add(a * b % mod, mod); }

const int N = 2e5 + 50;

int n, a[N];
int s[31][N];
int dp[N];

void solve() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for (int b = 0; b < 30; b++)
        for (int i = 0; i <= n + 5; i++) s[b][i] = 0, dp[i] = 0;

    dp[1] = 1;
    for (int b = 0; b < 30; b++) s[b][1] = mul(dp[1], ((a[1] >> b) & 1));

    for (int i = 2; i <= n; i++) {
        for (int b = 0; b < 30; b++) {
            int t = ((a[i] >> b) & 1);
            dp[i] = add(dp[i], mul(t, s[b][i - 1]));
        }
        for (int b = 0; b < 30; b++) {
            int t = ((a[i] >> b) & 1);
            s[b][i] = add(s[b][i - 1], dp[i] * t);
        }
    }
    int ans = dp[n];
    printf("%d\n", ans);
}

int main() {
    freopen("magic.in", "r", stdin);
    freopen("magic.out", "w", stdout);
    int T;
    scanf("%d", &T);
    while (T--) solve();
    return 0;
}
/*
dp[i]��ʾ1��i�ж�����·��
for(int i=1;i<=n;i++)//ö����һ������i
	for(int j=i+1;j<=n;j++){
		dp[j]=(dp[j]+1ll*dp[i]*__builtin_popcount(a[i]&a[j]))%p;
	}
cout<<dp[n]<<endl;
����DP 
���仯���� O(n^2)

λ����->��λ 
for(int i=1;i<=n;i++)//ö����һ������i
	for(int j=i+1;j<=n;j++){
		for(int k=0;k<30;k++)
			if(((f[i]>>k)&1)&&((f[j]>>k)&1))
				dp[j]=(dp[i]+dp[j])%p; 
				����һ��j�����е�iһ���� 
	}
������ʽ���뷨//ö����һ������i
 
for(int j=2;j<=n;j++)
	for(int k=0;k<30;k++){
		f[j]��k��һλΪ1����f[i]��k��һλΪ1
		
		sum[j][k]=sum[j-1][k];
		if(((f[j]>>k)&1)){//f[j]��kλΪ1 
			ֻ��30����� 
			i=1,2,3,...,j-1
			f[i]��kλΪ1 
			dp[j]+=sum[j-1][k];//f[i]��kλΪ1 
		}
	}
	dp[j]=dp[j]+dp[i]*popcount(a[i]&a[j])
	��popcount
	ö��i,j�ĵ�kλͬʱΪ1
	f[j]��kλΪ1��f[i]��kλ��Ϊ1 
	for(int k=0;k<30;k++){
		if(((f[j]>>k)&1)){
			sum[j][k]=dp[j]+sum[j-1][k];
		}
		else
			sum[j][k]=sum[j-1][k];
	}
f(x)
ö��һ��λ��f[j]��һλΪ1��f[i]��һλҲΪ1�ĸ��� 
k
sum[i][j]��ʾf[1],f[2],f[3],...,f[i]���ڶ������µ�jλΪ1������
dp[i]֮�� 
f[1]=3,f[2]=1,f[3]=4,f[4]=2
sum[4][0]=dp[1]+dp[2]
sum[4][1]=dp[1]+dp[4]
sum[4][2]=dp[3]
ǰ׺�͵��뷨��һ����
sum[i-1][0,...29] -> sum[i][0,...29] 
*/
