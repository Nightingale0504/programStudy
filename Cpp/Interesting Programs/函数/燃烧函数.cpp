#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<climits>
#include<cmath>
#define int long long
using namespace std;
const int maxN=1e5+5;
double F[maxN];
inline double f(double x){
	if (x<0){
		return -x;
	}else{
		return 1/2*f(x-f(x-1));
	}
}
signed main(){
	double n;
	scanf("%lf",&n);
	for (int i=0;i<=n;i++){
		double t=f(i);
		printf("f(%lld)=%lf\n",i,t);
	}
	return 0;
}

