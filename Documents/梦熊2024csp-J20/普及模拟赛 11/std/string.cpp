#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#define mod 1e9 + 7
using namespace std;

int n, m, k, ans;
int f[27], last[27];
void add(int &a, int b)
{
	a += b;
	if (a >= mod)
		a -= mod;
}
int main()
{
	int i, j, old, x, t;
	char c;
//	freopen("string.in", "r", stdin);
//	freopen("string.out", "w", stdout);
	scanf("%d%d", &m, &k);
	ans = 1;
	while (scanf("%c",&c)!=EOF)//所有文件的结尾都是EOF 
	{
//		c=getchar();
		x = c - 'a' + 1;
		if (x < 1 || x > 26) continue; 
		old = ans;
		add(ans, ans);
		add(ans, mod - f[x]);
		f[x] = old;
		last[x] = ++n;
//		c = getchar();
	}
	for (i = 1; i <= m; i++)
	{
		x = 0;
		for (j = 1; j <= k; j++)
			if (!x || last[x] > last[j])
				x = j;
		last[x] = ++n;
		old = ans;
		add(ans, ans);
		add(ans, mod - f[x]);
		f[x] = old; 
	}
	printf("%d", ans);
	return 0;
}

/*
s 是给出的字符串
for(int i=n;i>=1;i--){
	for(int j=1;j<=k;j++) nxt[i][j]=nxt[i+1][j];
	nxt[i][s[i+1]-'a'+1]=i+1;
}


*/


//给一个长度为n的字符串，字符集是前k个小写字母，可以在后面再加m个字母
//问本质不同的子序列最多有多少种
//k=1
//所有字母完全相同(加的m个字母也只能加字母a) 
// n+m个a组成的字符串
//aaaaaaaaaaaaaaaaa
//n+m个本质不同的子序列

//k=1   cout<<n+m<<endl; 


//字符串读入的技巧 
//n=0 scanf("%s",s+1); //RE
//给一个字符串，可能什么也没有，可能有若干字符，怎么读进来 

//找充要条件,去计算本质不同的子序列
//怎么判定一个字符串A是不是另一个字符串B的一个子序列
//aab是不是abbab 
//先找到第一个a字符 a
//再找到后续的第一个a字符 a 走到abba的位置
//再走到后续的第一个b   abbab的这个位置
//一定是每次找到后续的第一个我这个位置的字符 
/*
S,T 判定S是不是T的第一个子序列
int j=1;
for(int i=1;i<=|S|;i++){
	while(T[j]!=S[i]) j++;//找到第一个T[j]=S[i]  
}

*/

//dp[i]表示有多少个字符串S,
//S[1] ,S[2] S[3] S[4],.... S[|S|]   -> T的i这个位置 
 

//思考m=0怎么处理
//不在后面加字符，单纯问一个字符串有多少个本质不同的子序列
//dp[i]表示有多少个子序列不停匹配，已经匹配到了i
//枚举下一个字符是什么? 枚举下一个字符是1~k中的某一个c
//一定会匹配到i后续的第一个c字符
//S[1],....S[|S|] S[|S|+1]=c
//dp[i] -> dp[nxt[i][c]] nxt[i][c] 表示的是i后面的第一个c字符的位置 
//k=26 提前预处理每个i后续对于每个字符c第一次出现的位置nxt[i][c]
//最终答案就是所有dp[1]+dp[2]+...dp[n]  dp[0]=1 

//后面加字符

//枚举前面转移到后面

//枚举i   对于可以转移的j  dp[j]+=dp[i] 

//枚举后面，看看哪些前面的位置可以转过来 
//枚举j   看看哪些i可以转移到j  dp[j]+=dp[i] 

//考虑在后面加字符 
//dp[i] -> dp[nxt[i][c]]
//反过来考虑 dp[x]可以从哪些位置转移过来 
//dp[i] 转移到i后面的第一个c字符假设这个位置是j
//考虑哪些i可以转移到j
//[i+1,j-1] 这一段区间内没有字符s[j]
//abababababxababababx 
//           iiiiiiiij
//从倒过来转移的角度
//j  pre[j][s[j]] 是j之前的第一个s[j]字符位置是什么 
//记录x=pre[j][s[j]] 
//dp[j]=dp[x]+dp[x+1]+dp[x+2]+dp[x+3]+....+dp[j-1]
//通过前缀优化 
//肯定是想找x最小的字符
//pre[j][s[j]]最小的一个位置
//一定会变成距离我最远的那个字符 
//abcdebcdae_-> b
//abcdebcdaeb_-> c
//pre[j][c]最小的这样一个位置,c是我要插入的字符 
