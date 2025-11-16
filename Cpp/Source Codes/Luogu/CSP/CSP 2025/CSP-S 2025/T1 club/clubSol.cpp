/*
贪心
1.  先让每个人的最高分去该去的那个队伍
2.  3个队伍入数增加
3.  如果每个队伍的人数均<=n/2
    最大值累加即为签案
    否则 ----> 只有一个队伍会超过 n/2
    当前队伍需要做处理
    踢人 ----> 这个人的最高分变成次高分
    最高分 - 次高分 为损失量
    损失量最小x个
    x=队伍大小-n/2
*/
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e5+5;
struct node{
    int s1,s2;
}a[maxN],b[maxN],c[maxN];
int T,n,t1,t2,t3,sum,t;
int cnt1,cnt2,cnt3;
inline bool cmp(node x,node y){
    return (x.s1-x.s2)<(y.s1-y.s2);
}
signed main(){
    scanf("%lld",&T);
    while (T--){
        scanf("%lld",&n);
        for (int i=1;i<=n;i++){
            scanf("%lld%lld%lld",&t1,&t2,&t3);
            if (t1>=t2 && t1>=t3){
                a[++cnt1].s1=t1;
                a[cnt1].s2=max(t2,t3);
            }else if (t2>=t1 && t2>=t3){
                b[++cnt2].s1=t2;
                b[cnt2].s2=max(t1,t3);
            }else{
                c[++cnt3].s1=t3;
                c[cnt3].s2=max(t1,t2);
            }
        }
        for (int i=1;i<=cnt1;i++){
            sum+=a[i].s1;
        }
        for (int i=1;i<=cnt2;i++){
            sum+=b[i].s1;
        }
        for (int i=1;i<=cnt3;i++){
            sum+=c[i].s1;
        }
        if (cnt1>n/2){
            t=cnt1-n/2;
            sort(a+1,a+cnt1+1,cmp);
            for (int i=1;i<=t;i++){
                sum-=a[i].s1-a[i].s2;
            }
        }
        if (cnt2>n/2){
            t=cnt2-n/2;
            sort(b+1,b+cnt2+1,cmp);
            for (int i=1;i<=t;i++){
                sum-=b[i].s1-b[i].s2;
            }
        }
        if (cnt3>n/2){
            t=cnt3-n/2;
            sort(c+1,c+cnt3+1,cmp);
            for (int i=1;i<=t;i++){
                sum-=c[i].s1-c[i].s2;
            }
        }
        printf("%lld\n",sum);
        cnt1=0;
        cnt2=0;
        cnt3=0;
        sum=0;
    }
    return 0;
}