#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e4+5;
int t,n,ans;
double a;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&t);
		ans+=t;
	}
	a=ans*1.0/n;
	printf("%lld %.5lf",ans,a);
	return 0;
}

