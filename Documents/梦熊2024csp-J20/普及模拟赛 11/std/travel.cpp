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
      scanf("%d", &a[i]);//读入点权 
   memset(d, 0, sizeof(d));
   for (int i = 1; i <= n; i++)
   {
      scanf("%d", &f[i]);
      d[f[i]]++;
   } // 统计入度
   L = 0;
   r = 0;
   memset(v, 0, sizeof(v));
   for (int i = 1; i <= n; i++) // 初始化入度为0的点
      if (d[i] == 0)
      {
         q[r] = i;//q表示的是当前拓扑排序已经被删掉的点 
         r++;
      }
   while (L < r)//拓扑排序 
   {
      int x = q[L];
      v[x] = 1;
      d[f[x]]--;//x点被删除了，所以要把f[x]做处理(x,f[x]) 
      if (d[f[x]] == 0)
      {
         q[r] = f[x];
         r++;
      }
      L++;
   }
   for (int i = 1; i <= n; i++) // 处理环上点
      if (!v[i])//环上点 
      {
         int x = i;
         int st = x;//环的开头 
         int sum = a[x];
         v[x] = 1;
         while (f[x] != st)//直到走到st节点位置 
         {
            x = f[x];//不停在环上走 
            v[x] = 1;
            sum += a[x];//记录所有经过点的点权,相加记作sum 
         }
         x = i;
         ans[x] = sum;
         while (f[x] != st)
         {
            x = f[x];
            ans[x] = sum;
         }
      }
   for (int i = r - 1; i >= 0; i--) // 拓扑逆序递推
   {
      int x = q[i];
      ans[x] = a[x] + ans[f[x]];
   }
   for (int i = 1; i <= n; i++)
      printf("%d\n", ans[i]);
}

//i号点出发可以走到F[i]
//i F[i] F[F[i]] F[F[F[i]]] F[F[F[F[i]]]]
//问从i点出发，能走到的每个点的权值和具体是多少
//图论模型
//若干条边，每条边形如(i,F[i]) 问从i号点出发能到的所有点的权值和
//出度为1 
//n个点n条边  
//n个点n-1条边 -> 树
//n个点n条边 -> 树的基础上再加一条边  
//树 dfs 假设父亲节点能走到的点的权值和记作w[fa[u]] w[u]=a[u]+w[fa[u]] 
//对于每一个联通块分别处理:
//先找到这个环，环上的每个点能到的权值和就是环上所有点的和
//x  F[x] F[F[x]] ---  x
//x F[x] F[F[x]] F[F[F[x]]]  n次 
//暴力处理环-> 还是会TLE
//当我在走x
//for(int i=1;i<=n;i++){
//	x=F[x]; 
//}
//用一个vector v[x]记录哪些点连向我
//v[F[u]].push_back(u);


//并查集去处理
//n个点n条边的一张图 
//找到环上的一条边
//n个点n-1条边的一张图
//(u,v) 每一次u,v节点都一定是不连通 
//n个点n条边的一张图
//(u,v) 如果发现u,v两个节点在加入这条边之前就已经联通了，那么说明u,v都是环上节点
//u F[u] F[F[u]]  

//ZJ-001
//SCORE STRING TRAVEL OUTPUT
//建一个名叫score文件夹
//放一个score.cpp 里面开freopen 读入名叫score.in 输出名score.out
// 
