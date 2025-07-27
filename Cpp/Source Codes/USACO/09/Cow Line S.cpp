#include<bits/stdc++.h>
using namespace std;
#define int long long
deque<int> que;
int s,x,m=1;
char c,d;
signed main(){
	scanf("%lld",&s);
	for (int i=1;i<=s;i++){
		cin>>c>>d;
		if (c=='A'){
			if (d=='L'){
				que.push_front(m++);
			}else{
				que.push_back(m++);
			}
		}else if (c=='D'){
			scanf("%lld",&x);
			if (d=='L'){
				for (int j=1;j<=x;j++){
					que.pop_front();
				}
			}else{
				for (int j=1;j<=x;j++){
					que.pop_back();
				}
			}
		}
	}
	while (!que.empty()){
		printf("%lld\n",que.front());
		que.pop_front();
	}
	return 0;
}