#include<bits/stdc++.h> 
using namespace std;
#define int long long
int a[1005],c[1005],n;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=1;i<n;i++){
		c[i]=abs(a[i]-a[i+1]);
	}
	sort(c+1,c+n);
	for (int i=1;i<n;i++){
		if (c[i]!=i){
			printf("Not jolly\n");
			return 0;
		}
	}
	printf("Jolly\n");
	return 0;
}

