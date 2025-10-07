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
1.��������һ��ͬѧ��·�� 
2.�������ڶ���ͬѧ����һ��ͬѧ·����ĳ��������·
�����һ������:
ÿ���ߵ�Ȩֵ����1  BFS��˼����н��
����һ��˳�����BFS
��������1��������2��������3��������4����
ÿ���ߵ�һ���µ㣬���㷢���µ�û�и��µĻ�
��ô������µ� 
��㵽�е�����·�� 
����ڶ�������:
�ӵڶ���ͬѧ������������ͣ��bfs
ֱ���ҵ�һ����,�������·����

·����ô��¼
(x,y)  1,2,3,4
(x,y) -> (x+1,y) ����(x+1,y) û�б��߹�
pre[x+1][y]=make_pair(x,y)
pre[x][y] (x,y) �ڵ���һ���߹��������ĸ��ڵ�
(ex,ey)
while((ex,ey)!=���){
	ex,ey = pre[ex][ey];
	flag[ex][ey]=1;
}
*/


