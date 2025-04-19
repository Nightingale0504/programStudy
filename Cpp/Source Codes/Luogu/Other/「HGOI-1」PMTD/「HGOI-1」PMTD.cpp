#include<bits/stdc++.h> 
using namespace std;
#define ll long long
#define maxN 1000005
ll n,m,a[maxN],ans;
int main(){
	scanf("%lld%lld",&n,&m);
	for (long long i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	n--;
	while (m--){
		if (a[n]<=1){
			a[n]+=2;
		}else{
			a[n]*=2;
		}
	}
	ans=a[n]-a[0];
	printf("%lld\n",ans);
	return 0;
}

