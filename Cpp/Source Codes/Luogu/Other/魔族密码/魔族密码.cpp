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
using namespace std;
#define int long long
const int maxN=2005;
int n,u,ans,f[maxN];
string s[maxN];
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		cin>>s[i];
		f[i]=1;
	}
	for (int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++){
			if (s[j].find(s[i])==0){
				f[j]=max(f[j],f[i]+1);
			}
		}
	}
	for (int i=1;i<=n;i++){
		ans=max(ans,f[i]);
	}
	printf("%lld",ans);
	return 0;
}

