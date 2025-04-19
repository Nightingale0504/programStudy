#include<bits/stdc++.h> 
using namespace std;
#define int long long
int T,n;
signed main(){
	scanf("%lld",&T);
	while (T--){
		scanf("%lld",&n);
		if (n==2 || n==3 || n==5){
			printf("No\n");
		}else{
			printf("Yes\n");
		}
	}
	return 0;
}

