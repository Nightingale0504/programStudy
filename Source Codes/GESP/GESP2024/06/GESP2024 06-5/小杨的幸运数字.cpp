#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int t,n;
inline int f(int x){
	int tmp=n,ans=0;
	for (int i=2;i*i<=tmp;i++){
		if (n%i==0){
			ans++;
			while (n%i==0){
				n/=i;
			}
		}
	}
	if (n>1){
		ans++;
	}
	return ans;
}
signed main(){
	scanf("%lld",&t);
	while (t--){
		scanf("%lld",&n);
		if (f(n)==2){
			printf("1\n");
		}else{
			printf("0\n");
		}
	}
	return 0;
}

