#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,sum,a[maxN];
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+n+1);
	while (true){
		if (n==1){
			sum+=a[1];
			break;
		}else if (n==2){
			sum+=a[2];
			break;
		}else if (n==3){
			sum+=a[1]+a[2]+a[3];
			break;
		}else{
			if (a[1]+a[n-1]<2*a[2]){
				sum+=a[n]+a[n-1]+2*a[1];
			}else{
				sum+=a[1]+a[n]+2*a[2];
			}
			n-=2;
		}
	}
	printf("%lld",sum);
	return 0;
}

