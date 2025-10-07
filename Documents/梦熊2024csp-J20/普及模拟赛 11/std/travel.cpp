#include <iostream>
#include <cstdio>
#include <cstring>
const int MXN = 200002;
int n, a[MXN], d[MXN], f[MXN];
int ans[MXN], q[MXN], v[MXN], L, r;
int main()
{
   freopen("travel2.in", "r", stdin);
   freopen("travel.out", "w", stdout);
   scanf("%d", &n);
   for (int i = 1; i <= n; i++)
      scanf("%d", &a[i]);//�����Ȩ 
   memset(d, 0, sizeof(d));
   for (int i = 1; i <= n; i++)
   {
      scanf("%d", &f[i]);
      d[f[i]]++;
   } // ͳ�����
   L = 0;
   r = 0;
   memset(v, 0, sizeof(v));
   for (int i = 1; i <= n; i++) // ��ʼ�����Ϊ0�ĵ�
      if (d[i] == 0)
      {
         q[r] = i;//q��ʾ���ǵ�ǰ���������Ѿ���ɾ���ĵ� 
         r++;
      }
   while (L < r)//�������� 
   {
      int x = q[L];
      v[x] = 1;
      d[f[x]]--;//x�㱻ɾ���ˣ�����Ҫ��f[x]������(x,f[x]) 
      if (d[f[x]] == 0)
      {
         q[r] = f[x];
         r++;
      }
      L++;
   }
   for (int i = 1; i <= n; i++) // �����ϵ�
      if (!v[i])//���ϵ� 
      {
         int x = i;
         int st = x;//���Ŀ�ͷ 
         int sum = a[x];
         v[x] = 1;
         while (f[x] != st)//ֱ���ߵ�st�ڵ�λ�� 
         {
            x = f[x];//��ͣ�ڻ����� 
            v[x] = 1;
            sum += a[x];//��¼���о�����ĵ�Ȩ,��Ӽ���sum 
         }
         x = i;
         ans[x] = sum;
         while (f[x] != st)
         {
            x = f[x];
            ans[x] = sum;
         }
      }
   for (int i = r - 1; i >= 0; i--) // �����������
   {
      int x = q[i];
      ans[x] = a[x] + ans[f[x]];
   }
   for (int i = 1; i <= n; i++)
      printf("%d\n", ans[i]);
}

//i�ŵ���������ߵ�F[i]
//i F[i] F[F[i]] F[F[F[i]]] F[F[F[F[i]]]]
//�ʴ�i����������ߵ���ÿ�����Ȩֵ�;����Ƕ���
//ͼ��ģ��
//�������ߣ�ÿ��������(i,F[i]) �ʴ�i�ŵ�����ܵ������е��Ȩֵ��
//����Ϊ1 
//n����n����  
//n����n-1���� -> ��
//n����n���� -> ���Ļ������ټ�һ����  
//�� dfs ���踸�׽ڵ����ߵ��ĵ��Ȩֵ�ͼ���w[fa[u]] w[u]=a[u]+w[fa[u]] 
//����ÿһ����ͨ��ֱ���:
//���ҵ�����������ϵ�ÿ�����ܵ���Ȩֵ�;��ǻ������е�ĺ�
//x  F[x] F[F[x]] ---  x
//x F[x] F[F[x]] F[F[F[x]]]  n�� 
//��������-> ���ǻ�TLE
//��������x
//for(int i=1;i<=n;i++){
//	x=F[x]; 
//}
//��һ��vector v[x]��¼��Щ��������
//v[F[u]].push_back(u);


//���鼯ȥ����
//n����n���ߵ�һ��ͼ 
//�ҵ����ϵ�һ����
//n����n-1���ߵ�һ��ͼ
//(u,v) ÿһ��u,v�ڵ㶼һ���ǲ���ͨ 
//n����n���ߵ�һ��ͼ
//(u,v) �������u,v�����ڵ��ڼ���������֮ǰ���Ѿ���ͨ�ˣ���ô˵��u,v���ǻ��Ͻڵ�
//u F[u] F[F[u]]  

//ZJ-001
//SCORE STRING TRAVEL OUTPUT
//��һ������score�ļ���
//��һ��score.cpp ���濪freopen ��������score.in �����score.out
// 
