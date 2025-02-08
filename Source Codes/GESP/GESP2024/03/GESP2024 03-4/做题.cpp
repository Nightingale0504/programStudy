#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e6+5;
int n,cnt=1;
int a[maxN];
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	for (int i=0;i<n;i++){
		if (a[i]>=cnt){
			cnt++;
		}
	}
	cnt--;
	printf("%lld",cnt);
	return 0;
}

