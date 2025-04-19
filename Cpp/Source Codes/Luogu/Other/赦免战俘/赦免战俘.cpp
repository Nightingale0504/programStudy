#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<(1<<n);i++){
		for (int j=0;j<(1<<n);j++){
			printf("%lld",(i|j)!=((1<<n)-1) ? 0 : 1);
		}
		printf("\n");
	}
	return 0;
}

