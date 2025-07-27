#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e7+5;
int n,k,a[maxN];
deque<int> que;
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=1;i<=n;i++){
		if (!que.empty() && i-k+1>que.front()){
			que.pop_front();
		}
		while (!que.empty() && a[i]<=a[que.back()]){
			que.pop_back();
		}
		que.push_back(i);
		if (i>=k){
			printf("%lld ",a[que.front()]);
		}
	}
	printf("\n");
	que.clear();
	for (int i=1;i<=n;i++){
		if (i-k+1>que.front()){
			que.pop_front();
		}
		while (!que.empty() && a[i]>=a[que.back()]){
			que.pop_back();
		}
		que.push_back(i);
		if (i>=k){
			printf("%lld ",a[que.front()]);
		}
	}
	return 0;
}

