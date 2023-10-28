#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
#define int long long
int n,a[15];
int ans;
char s[15];
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld\n%s",&n,&s);
	for (int i=0;i<sizeof(s);i++){
		a[i]=s[i]-'0';
	}
	do{
		ans++;
	}while (prev_permutation(a,a+n));
	printf("%lld",ans);
	return 0;
}

