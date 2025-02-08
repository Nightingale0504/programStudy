#include<stdio.h>
#include<algorithm>
using namespace std;
struct water {
    int num,time;
} p[1002];
double ans;
bool comp(water a,water b) {
    if(a.time!=b.time)
        return a.time<b.time;
    return a.num<b.num;
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++) {
        scanf("%d",&p[i].time);
        p[i].num=i;
    }
    sort(p+1,p+n+1,comp);
    for(int i=1; i<=n; i++)
        printf("%d ",p[i].num);
    printf("\n");
    for(int i=1; i<=n; i++)
        ans+=i*p[n-i].time;
    ans/=n;
    printf("%.2f",ans);
    return 0;
}
