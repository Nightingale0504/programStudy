#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,x,y; 
int a,ans;
signed main(){
	scanf("%lld%lld%lld",&n,&x,&y);
	for (int i=0;i<n;i++){
		scanf("%lld",&a);
		if (a*x<=y){
			ans+=a*x;
		}else{
			ans+=y;
		}
	}
	printf("%lld",ans);
	return 0;
}

