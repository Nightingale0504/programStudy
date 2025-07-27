#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=2e3+5;
int n,x,a[maxN];
deque<int> que;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",x);
		que.push_back(x);
	}
	while (que.back()!=n){
		que.push_front(que.back());
		que.pop_back();
		int k=1;
		memset(a,0,sizeof(a));
		while (!que.empty()){
			a[k++]=que.front();
			que.pop_front();
		}
		for (int i=1;i<=k;i++){
			printf("%lld ",a[i]);
			que.push_front(a[i]);
		}
		printf("\n");
	}
	return 0;
}

