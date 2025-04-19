#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,k,a[1005],ans,book[1005];
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			if (i+j==k && i!=j){
				book[i]=1;
				book[j]=1;
			}
		}
	}
	for (int i=0;i<n;i++){
		if (book[i]==0){
			ans++;
		}
	}
	printf("%lld",ans);
	return 0;
}

