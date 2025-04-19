#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m;
int a[1005][1005];
int p,q;
bool book[1005];
queue<int> que;
signed main(){
	scanf("%lld%lld",&n,&m);
	while (m--){
		scanf("%lld%lld",&p,&q);
		a[p][q]=1;
	}
	que.push(1);
	book[1]=1;
	while (!que.empty()){
		for (int i=1;i<=n;i++){
			if (a[que.front()][i]==1 && book[i]==0){
				book[i]=1;
				que.push(i);
			}
		}
		printf("%lld ",que.front());
		que.pop();
	}
	return 0;
}

