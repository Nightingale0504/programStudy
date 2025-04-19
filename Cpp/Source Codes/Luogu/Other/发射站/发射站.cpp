#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e6+5;
struct es{
	int h,v;
}e[maxN];
int n,a[maxN];
int mmax=INT_MIN;
stack<int> st;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld%lld",&e[i].h,&e[i].v);
	}
	for (int i=1;i<=n;i++){
		while (!st.empty() && e[i].h>e[st.top()].h){
			a[i]+=e[st.top()].v;
			st.pop();
		}
		if (!st.empty()){
			a[st.top()]+=e[i].v;
		}
		st.push(i);
	}
	for (int i=1;i<=n;i++){
		mmax=max(mmax,a[i]);
	}
	printf("%lld",mmax);
	return 0;
}
