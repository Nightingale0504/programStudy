#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=505;
int w,n,a[maxN],cnt;
signed main(){
	scanf("%lld%lld",&w,&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	for (int i=0;i<n;i++){
		if (w>=a[i]){
			w-=a[i];
			cnt++;
		}
	}
	printf("%lld",cnt);
	return 0;
}

