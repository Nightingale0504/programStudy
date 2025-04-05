#include<iostream>
#include<cstdio>
#include<algorithm>
#include<stack>
using namespace std;
#define int long long
const int maxN=1005;
int t,n,f[maxN];
stack<int> st;
signed main(){
	f[1]=f[2]=1;
	for (int i=3;i<=45;i++){
		f[i]=f[i-1]+f[i-2];
	}
	scanf("%lld",&t);
	while (t--){
		scanf("%lld",&n);
		printf("%lld=",n);
		for (int i=45;i>=1;i--){
			if (n>=f[i]){
				n-=f[i];
				st.push(f[i]);
			}
		}
		printf("%lld",st.top());
		st.pop();
		while (!st.empty()){
			printf("+%lld",st.top());
			st.pop();
		}
		printf("\n");
	}
	return 0;
}

