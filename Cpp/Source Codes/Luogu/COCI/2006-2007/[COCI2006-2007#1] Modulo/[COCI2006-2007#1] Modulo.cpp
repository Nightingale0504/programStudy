#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n=10,t[45],ans;
signed main(){
	while (n--){
		int tmp;
		scanf("%lld",&tmp);
		t[tmp%42]++;
	}
	for (int i=0;i<42;i++){
		if (t[i]){
			ans++;
		}
	}
	printf("%lld",ans);
	return 0;
}

