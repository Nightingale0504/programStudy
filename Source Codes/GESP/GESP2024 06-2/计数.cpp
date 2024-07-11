#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,k,tmp,cnt;
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=1;i<=n;i++){
		int tmp=i;
		while (tmp!=0){
			int t=tmp%10;
			if (t==k){
				cnt++;
			}
			tmp/=10;
		}
	}
	printf("%lld",cnt);
	return 0;
}

