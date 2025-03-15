#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
const int M=15;
int a[M],b[M],n,ans=0x7fffffff;
void dfs(int i,int x,int y){
    if (i>n){
        if (x==1 && y==0){
        	return;
		}
        ans=min(abs(x-y),ans);
        return;
    }
    dfs(i+1,x*a[i],y+b[i]);
    dfs(i+1,x,y);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    dfs(1,1,0);
    printf("%d\n",ans);
    return 0;
}
