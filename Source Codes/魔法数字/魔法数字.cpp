#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define int long long
int n,m,t;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=1;;i++){
		t=pow(2,i);
		if (t<n){
			if (i%2==0){
				m=i;
			}
		}else{
			break;
		}
	}
	printf("%lld",m);
	return 0;
}

