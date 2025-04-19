#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e5+5;
int t,n,mmax;
int a[maxN];
bool flag;
signed main(){
	scanf("%lld",&t);
	while (t--){
		scanf("%lld",&n);
		mmax=0;
		flag=true;
		for (int i=0;i<n;i++){
			scanf("%lld",&a[i]);
			mmax=max(mmax,a[i]);
		}
		for (int i=0;i<n;i++){
			if (mmax%a[i]!=0){
				flag=false;
				break;
			}
		} 
		if (flag){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	return 0;
}

