#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
struct Point
{
    int x, y, pre;
};
int n, m, sx, sy, tx, ty, px, py, head, tail, ans;
int map[1002][1002];
bool vis[1002][1002], got, second;
Point q[1000002];
inline void push(int x, int y)
{
    if (map[x][y] && !vis[x][y] && !got)
    {
        vis[x][y] = 1;
        q[++tail].x = x, q[tail].y = y, q[tail].pre = head;
        if (map[x][y] == 2)
            got = 1;
    }
}
void bfs(int sx, int sy)
{
    got = 0;
    int x, y;
    head = 0, tail = 0;
    push(sx, sy);
    do
    {
        head++;
        x = q[head].x, y = q[head].y;
        push(x - 1, y);//1
        push(x, y + 1);//2
        push(x + 1, y);//3
        push(x, y - 1);//4
    } while (head < tail && !got);
    if (!got)
    {
        printf("-1\n");
        exit(0);
    }
}
int main() {
    scanf("%d%d%d%d%d%d%d%d", &n, &m, &sx, &sy, &tx, &ty, &px, &py);
    int i, j, t;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            scanf("%d", &t), map[i][j] = !t;
    map[px][py] = 2;
    bfs(sx, sy);
    for (t = tail; t; t = q[t].pre)
        map[q[t].x][q[t].y] = 2;
    memset(vis, 0, sizeof(vis));
    memset(q, 0, sizeof(q));
    bfs(tx, ty);
    for (t = q[tail].pre; t; t = q[t].pre)
        ans++;
    printf("%d\n", ans);
    return 0;
}
/*
1.如何求出第一个同学的路径 
2.如何求出第二个同学到第一个同学路径上某个点的最短路
解决第一个问题:
每条边的权值都是1  BFS的思想进行解决
按照一个顺序进行BFS
我们先走1方向，再走2方向，再走3方向，再走4方向
每次走到一个新点，当你发现新点没有更新的话
那么距离更新掉 
起点到中点的最短路径 
解决第二个问题:
从第二个同学的起点出发，不停做bfs
直到找到一个点,它在最短路径上

路径怎么记录
(x,y)  1,2,3,4
(x,y) -> (x+1,y) 发现(x+1,y) 没有被走过
pre[x+1][y]=make_pair(x,y)
pre[x][y] (x,y) 节点上一个走过来的是哪个节点
(ex,ey)
while((ex,ey)!=起点){
	ex,ey = pre[ex][ey];
	flag[ex][ey]=1;
}
*/


