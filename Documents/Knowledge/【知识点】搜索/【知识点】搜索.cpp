#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    /* 搜索 Search

    1st. 深度优先搜索 DFS -> Depth-First Search
        算法: 递归
        处理逻辑: 能深则深, 不能深则退
        问题: TLE ( 暴力搜索 ) -> 数据范围一定要小

        1. 地图模拟
            (1) 字符型二维数组 a[][]
                I. 起点终点已知 
                    cin>>sx>>sy>>ex>>ey;
                    地图中给出 @/#/%...
                II. 问题
                    A. 能否能找到
                    B. 方案数
                    etc...
            (2) 方位数组
                十字: 1 - 0
                米字: 1 - 0,1 - -1
                日字: 1 - 2
            (3) 标记数组 book[][]

        2. 全排列
    动态规划 DP -> Dynamic Programming
    算法: 递推

    2st. 广度优先搜索 BFS -> Breadth-First Search
        适用范围: 最短步长问题

        模板(book 标记):
        (1) 起点入队
            node c={起点x,起点y,0};
            book[起点x][起点y]=1;
            que.push(c);
        (2) BFS 处理
            while (!que.empty()){
                int x=que.front().x;
                int y=que.front().y;
                int step=que.front().step;
                que.pop();
                for (int i=0;i<8;i++){
                    int newX=x+dx[i];
                    int newY=y+dy[i];
                    if (不越界 && 没走过 && 是通路){
                        book[newX][newY]=1;
                        c={newX,newY,step+1};
                        que.push(c);
                        if (newX==终点x && newY==终点y){
                            printf("%lld",step+1);
                            return 0;
                        }
                    }
                }
            }
    
    
    */
    return 0;
}