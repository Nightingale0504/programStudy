#include<bits/stdc++.h> 
using namespace std;
#define int long long
int x,y,b,s,n=0;
signed main(){
	scanf("%lld",&s);
	for (int i=1;i<=s;i++){
		scanf("%lld%lld",&x,&y);
		b=b+x+y-8;
		n+=b;
	}
	printf("%lld\n",n);
	return 0;
}

