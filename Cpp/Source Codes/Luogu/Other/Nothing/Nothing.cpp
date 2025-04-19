#include<bits/stdc++.h> 
using namespace std;
#define int long long
int T,l,r;
signed main(){
	scanf("%lld",&T);
	while (T--){
		scanf("%lld%lld",&l,&r);
		printf("%lld\n",(r-l+1)/2+(l%2==1 && r%2==1));
	}
	return 0;
}
