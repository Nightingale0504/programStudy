#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define int long long
int a1,a2,b1,b2;
signed main(){
	scanf("%lld%lld%lld%lld",&a1,&b1,&a2,&b2);
	printf("%.3lf",sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2)));
	return 0;
}

