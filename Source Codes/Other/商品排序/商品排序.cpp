#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n;
double a[1005];
bool cmp(double a,double b){
	return a>b;
}
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++){
		printf("%.1f ",a[i]);
	}
	return 0;
}

