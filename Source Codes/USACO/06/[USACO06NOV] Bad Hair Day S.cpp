#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;
#define int long long
const int maxN=8e4+5;
stack<int> st;
int n,ans,t;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&t);
		while (!st.empty() && t>=st.top()){
			st.pop();
		}
		ans+=st.size();
		st.push(t);
	}
	printf("%lld",ans);
	return 0;
}

