#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=3e5+5;
int n,ans,h[maxN];
stack<int> st;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&h[i]);
	}
	for (int i=1;i<=n;i++){
		while (!st.empty() && h[i]>h[st.top()]){
			ans+=i-st.top()+1;
			st.pop();
		}
		if (!st.empty()){
			ans+=i-st.top()+1;
		}
		st.push(i);
	}
	printf("%lld",ans);
	return 0;
}

