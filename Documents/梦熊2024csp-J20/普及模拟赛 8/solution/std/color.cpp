#include <cstdio>
using namespace std;
struct EDGE{
	int to, nxt;
}e[100005];
int n, c[100005],a[100005], head[100005], cnt, son[100005], ans;
void dfs(int now, int cl){
	if(cl != c[now]){
		ans++;
		cl = c[now];
	}
	if(!son[now]) return ;
	for(int i = head[now]; i; i = e[i].nxt )
		dfs(e[i].to , cl);
}

int main(){
	scanf("%d",&n);
	for(int i = 2; i <= n; i++){
		int x;
		scanf("%d",&x);
		e[++cnt].nxt = head[x];
		e[cnt].to = i;
		head[x] = cnt;
		son[x]++;
	}
	for(int i = 1; i <= n; i++) scanf("%d",&c[i]);
	dfs(1, 0);
	printf("%d",ans);
	return 0;
}
