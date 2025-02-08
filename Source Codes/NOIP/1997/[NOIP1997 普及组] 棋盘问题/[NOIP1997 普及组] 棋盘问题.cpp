#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,m,s1,s2;
signed main(){
	scanf("%lld%lld",&n,&m);
	s2=((m+1)*(n+1)*m*n)/4;
	for (;m>=1 && n>=1;m--,n--){
		s1+=m*n;
	}
	s2-=s1;
	printf("%lld %lld",s1,s2);
	return 0;
}

