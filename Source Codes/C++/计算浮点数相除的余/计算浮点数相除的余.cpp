#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
#define int long long
double a,b;
signed main(){
	scanf("%lf%lf",&a,&b);
	printf("%lf",fmod(a,b));
	return 0;
}
