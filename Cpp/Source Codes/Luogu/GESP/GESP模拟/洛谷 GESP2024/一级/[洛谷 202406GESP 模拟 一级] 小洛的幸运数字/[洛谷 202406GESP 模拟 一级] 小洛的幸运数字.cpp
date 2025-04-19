#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,a,ans,cnt;
signed main(){
	scanf("%lld",&n);
	while (n--){
		scanf("%lld",&a);
		if (a%3!=0 && a%10!=3){
			ans+=a;
			cnt++;
		}
	}
	printf("%lld %lld",ans,cnt);
	return 0;
}

