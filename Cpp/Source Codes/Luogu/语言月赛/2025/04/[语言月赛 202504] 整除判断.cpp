#include<bits/stdc++.h>
#define int long long
using namespace std;
int m,n,ans;
signed main(){
	scanf("%lld%lld",&m,&n);
	while (n--){
		int a,x=0;
		scanf("%lld",&a);
		int b=a;
		if (a%m==0){
			continue;
		}
		while (a!=0){
			x+=a%10;
			a/=10;
		} 
		if (x%m==0){
			printf("%lld\n",b);
			ans++;
		}
	}
	if (ans==0){
		printf("None");
	}
	return 0;
}

