#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e5+5,maxK=3e5+5,h=86400;
int n,t,k,tmp,ans,s;
int num[maxN],nation[maxK],te[maxK];
signed main(){
	scanf("%lld",&n);
	while (n--){
		scanf("%lld%lld",&t,&k);
		while (k--){
			tmp++;
			te[tmp]=t;
			scanf("%lld",&nation[tmp]);
			if (num[nation[tmp]]==0){
				ans++;
			}
			num[nation[tmp]]++;
		}
		while (t-te[s]>=h){
			num[nation[s]]--;
			if (num[nation[s]]==0){
				ans--;
			}
			s++;
		}
		printf("%lld\n",ans);
	}
	return 0;
}

