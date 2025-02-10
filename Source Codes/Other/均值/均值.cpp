#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=105;
int n;
double ans,t; 
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lf",&t);
		ans+=t;
	}
	ans/=n;
	printf("%.4lf",ans);
	return 0;
}

