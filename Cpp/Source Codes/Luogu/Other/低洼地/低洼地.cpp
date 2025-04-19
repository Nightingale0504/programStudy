#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,a[10005],pre,ans;
bool flag,change;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	if (a[0]<=a[1]){
		flag=false;
	}
	for (int i=2;i<=n;i++){
		pre=a[i-1];
		change=flag;
		if (pre<a[i]){
			flag=false;
		}
		if (pre>a[i]){
			flag=true;
		}
		if (flag!=change){
			ans++;
		}
	}
	printf("%lld",ans/2);
	return 0;
}

