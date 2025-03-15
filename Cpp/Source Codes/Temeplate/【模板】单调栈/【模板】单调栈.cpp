#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;
#define int long long
const int maxN=3e6+5;
int n,a[maxN],b[maxN];
stack<int> st;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=1;i<=n;i++){
		while (!st.empty() && a[i]>a[st.top()]){
			b[st.top()]=i;
			st.pop();
		}
		st.push(i);
	}
	for (int i=1;i<=n;i++){
		printf("%lld ",b[i]);
	}
	return 0;
}

