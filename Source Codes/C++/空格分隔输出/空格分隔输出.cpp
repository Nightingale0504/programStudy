#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
char c;
int n;
float f;
double d;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%c%lld%f%lf",&c,&n,&f,&d);
	printf("%c %lld %.6f %.6lf",c,n,f,d);
	return 0;
}

