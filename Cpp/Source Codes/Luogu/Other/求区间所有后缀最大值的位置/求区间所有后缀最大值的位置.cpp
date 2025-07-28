#include<bits/stdc++.h> 
using namespace std;
#define int unsigned long long
const int maxN=1e6+5;
int n,k,a[maxN];
deque<int> que;
signed main(){
    scanf("%llu%llu",&n,&k);
	for (int i=1;i<=n;i++){
		scanf("%llu",&a[i]);
	}
	for (int i=1;i<=n;i++){
		while (!que.empty() && que.front()+k<=i){
			que.pop_front();
		}
		while (!que.empty() && a[i]>=a[que.back()]){
			que.pop_back();
		}
		que.push_back(i);
		if (i>=k){
			printf("%llu\n",que.size());
		}
	}
	return 0;
}