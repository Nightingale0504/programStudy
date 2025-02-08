#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,a[105];
bool cmp(int x,int y){
	return x>y;
}
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++){
		if (a[i]==0){
			continue;
		}
		printf("%lld ",a[i]);
	}
	return 0;
}

