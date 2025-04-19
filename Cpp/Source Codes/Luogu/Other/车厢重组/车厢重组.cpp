#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,sum,a[10005];
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<i;j++){
			if (a[i]<a[j]){
				sum++;
			}
		}
	}
	printf("%lld",sum);
	return 0;
}

