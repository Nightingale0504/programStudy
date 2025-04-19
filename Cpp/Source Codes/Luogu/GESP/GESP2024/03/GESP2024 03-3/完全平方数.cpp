#include<bits/stdc++.h> 
using namespace std;
const int maxN=1e3+5;
int n,t,x;
int ans;
int a[maxN];
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			t=a[i]+a[j];
			x=int(sqrt(t));
			if (x*x==t){
				ans++;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}

