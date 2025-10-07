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
	while (scanf("%c",&c)!=EOF)//�����ļ��Ľ�β����EOF 
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
s �Ǹ������ַ���
for(int i=n;i>=1;i--){
	for(int j=1;j<=k;j++) nxt[i][j]=nxt[i+1][j];
	nxt[i][s[i+1]-'a'+1]=i+1;
}


*/


//��һ������Ϊn���ַ������ַ�����ǰk��Сд��ĸ�������ں����ټ�m����ĸ
//�ʱ��ʲ�ͬ������������ж�����
//k=1
//������ĸ��ȫ��ͬ(�ӵ�m����ĸҲֻ�ܼ���ĸa) 
// n+m��a��ɵ��ַ���
//aaaaaaaaaaaaaaaaa
//n+m�����ʲ�ͬ��������

//k=1   cout<<n+m<<endl; 


//�ַ�������ļ��� 
//n=0 scanf("%s",s+1); //RE
//��һ���ַ���������ʲôҲû�У������������ַ�����ô������ 

//�ҳ�Ҫ����,ȥ���㱾�ʲ�ͬ��������
//��ô�ж�һ���ַ���A�ǲ�����һ���ַ���B��һ��������
//aab�ǲ���abbab 
//���ҵ���һ��a�ַ� a
//���ҵ������ĵ�һ��a�ַ� a �ߵ�abba��λ��
//���ߵ������ĵ�һ��b   abbab�����λ��
//һ����ÿ���ҵ������ĵ�һ�������λ�õ��ַ� 
/*
S,T �ж�S�ǲ���T�ĵ�һ��������
int j=1;
for(int i=1;i<=|S|;i++){
	while(T[j]!=S[i]) j++;//�ҵ���һ��T[j]=S[i]  
}

*/

//dp[i]��ʾ�ж��ٸ��ַ���S,
//S[1] ,S[2] S[3] S[4],.... S[|S|]   -> T��i���λ�� 
 

//˼��m=0��ô����
//���ں�����ַ���������һ���ַ����ж��ٸ����ʲ�ͬ��������
//dp[i]��ʾ�ж��ٸ������в�ͣƥ�䣬�Ѿ�ƥ�䵽��i
//ö����һ���ַ���ʲô? ö����һ���ַ���1~k�е�ĳһ��c
//һ����ƥ�䵽i�����ĵ�һ��c�ַ�
//S[1],....S[|S|] S[|S|+1]=c
//dp[i] -> dp[nxt[i][c]] nxt[i][c] ��ʾ����i����ĵ�һ��c�ַ���λ�� 
//k=26 ��ǰԤ����ÿ��i��������ÿ���ַ�c��һ�γ��ֵ�λ��nxt[i][c]
//���մ𰸾�������dp[1]+dp[2]+...dp[n]  dp[0]=1 

//������ַ�

//ö��ǰ��ת�Ƶ�����

//ö��i   ���ڿ���ת�Ƶ�j  dp[j]+=dp[i] 

//ö�ٺ��棬������Щǰ���λ�ÿ���ת���� 
//ö��j   ������Щi����ת�Ƶ�j  dp[j]+=dp[i] 

//�����ں�����ַ� 
//dp[i] -> dp[nxt[i][c]]
//���������� dp[x]���Դ���Щλ��ת�ƹ��� 
//dp[i] ת�Ƶ�i����ĵ�һ��c�ַ��������λ����j
//������Щi����ת�Ƶ�j
//[i+1,j-1] ��һ��������û���ַ�s[j]
//abababababxababababx 
//           iiiiiiiij
//�ӵ�����ת�ƵĽǶ�
//j  pre[j][s[j]] ��j֮ǰ�ĵ�һ��s[j]�ַ�λ����ʲô 
//��¼x=pre[j][s[j]] 
//dp[j]=dp[x]+dp[x+1]+dp[x+2]+dp[x+3]+....+dp[j-1]
//ͨ��ǰ׺�Ż� 
//�϶�������x��С���ַ�
//pre[j][s[j]]��С��һ��λ��
//һ�����ɾ�������Զ���Ǹ��ַ� 
//abcdebcdae_-> b
//abcdebcdaeb_-> c
//pre[j][c]��С������һ��λ��,c����Ҫ������ַ� 
