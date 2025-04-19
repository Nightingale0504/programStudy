#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n;
signed main(){
	scanf("%lld",&n);
	if (n%3==0 && n%5==0){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}

