#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n;
int a[100005],b[100005];
int var1=0,var2=0;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=1;i<=n;i++){
		scanf("%lld",&b[i]);
	}
	for (int i=1;i<=n;i++){
		var1+=a[i];
		var2+=b[i];
		if (var1<var2){
			printf("%lld",i);
			break;
		}
	}
	return 0;
}

