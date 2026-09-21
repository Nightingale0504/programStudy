#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=55,maxID=1005;
int n,m,q,t=1,cnt1,cnt2;
int a[maxN][maxN];
struct node{
    int x1,y1,h,w,state;
}s[maxID];
signed main(){
    scanf("%lld%lld%lld",&n,&m,&q);
    while (q--){
        int opt;
        scanf("%lld",&opt);
        if (opt==1){
            int x1,y1,h,w;
            bool flag=true;
            scanf("%lld%lld%lld%lld",&x1,&y1,&h,&w);
            if (x1>=1 && x1<=n && (x1+h-1)>=1 && (x1+h-1)<=n && y1>=1 && y1<=m && (y1+w-1)>=1 && (y1+w-1)<=m){
                for (int i=x1;i<=x1+h-1;i++){
                    for (int j=y1;j<=y1+w-1;j++){
                        if (a[i][j]!=0){
                            flag=false;
                            printf("Error\n");
                            break;
                        }
                    }
                    if (!flag){
                        break;
                    }
                }
                if (flag){
                    s[t].x1=x1;
                    s[t].y1=y1;
                    s[t].h=h;
                    s[t].w=w;
                    s[t].state=1;
                    for (int i=x1;i<=x1+h-1;i++){
                        for (int j=y1;j<=y1+w-1;j++){
                            a[i][j]=t;
                        }
                    }
                    printf("%lld\n",t);
                    t++;
                }
            }else{
                printf("Error\n");
            }
        }else if (opt==2){
            int id;
            scanf("%lld",&id);
            if (s[id].state==1){
                s[id].state=0;
                for (int i=s[id].x1;i<=s[id].x1+s[id].h-1;i++){
                    for (int j=s[id].y1;j<=s[id].y1+s[id].w-1;j++){
                        a[i][j]=0;
                    }
                }
                printf("Remove\n");
            }else{
                printf("Error\n");
            }
        }else{
            int x1,y1;
            scanf("%lld%lld",&x1,&y1);
            printf("%lld\n",a[x1][y1]);
        }
    }
    for (int i=1;i<=t;i++){
        if (s[i].state==1){
            cnt1++;
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if (a[i][j]!=0){
                cnt2++;
            }
        }
    }
    printf("%lld %lld\n",cnt1,cnt2);
    return 0;
}