#include<bits/stdc++.h> 
using namespace std;
#define int unsigned long long
const int maxN=1e6+5;
int n,a[maxN],ans;
stack<int> st;
signed main(){
	scanf("%llu",&n);
	for (int i=1;i<=n;i++){
		scanf("%llu",&a[i]);
		while (!st.empty() && a[st.top()]<=a[i]){
			ans^=st.top();
			st.pop();
		}
		st.push(i);
		ans^=st.top();
		printf("%llu\n",ans); 
	}
	return 0;
}

