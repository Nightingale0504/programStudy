#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<climits>
#include<cmath>
#include<map>
#include<stack>
#include<queue>
#include<climits>
#include<cmath>
#define int long long
using namespace std;
const int maxN=55;
int n,t[maxN],s[maxN],a,b;
int ans;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n-1;i++){
		scanf("%lld",&t[i]); 
	}
	for (int i=1;i<=n;i++){
		scanf("%lld",&s[i]);
	}
	scanf("%lld%lld",&a,&b);
	for (int i=a;i<=b;i++){
		ans+=s[i];
		if (i<b){
			ans+=t[i];
		}
	}
	printf("%lld",ans);
	return 0;
}

