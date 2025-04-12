#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int s,ans=10;
signed main(){
	scanf("%lld",&s);
	if (s>3 && s<=8){
		s-=3;
		ans+=3*s;
	}
	if (s>8){
		s-=8;
		ans+=5*s+15;
	}
	printf("%lld",ans);
	return 0;
}

