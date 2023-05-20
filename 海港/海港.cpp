#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue> 
using namespace std;
#define rei register int
int n, t, m, x;
int temp_nation[1000005];
int ans;
struct node{
    int s, t;
};
queue<node>ship;
node h;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	scanf("%d",&n);
    for (rei i=0;i<n;i++){
        scanf("%d%d",&t,&m);
        while (!ship.empty()){
            h=ship.front();
            if (h.t+86400<=t){
                temp_nation[h.s]--;
                if (temp_nation[h.s]==0){
                	ans--;
				}
                ship.pop();
                continue;
            }
            break;
        }
        for (rei j=0;j<m;++j){
            scanf("%d",&x);
            h.s=x;
			h.t=t;
            ship.push(h);
            temp_nation[x]++;
            if (temp_nation[x]==1){
            	ans++;
			}
        }
        printf("%d\n",ans);
    }
	return 0;
}

