#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
ll x,y;
int gcd(ll a,ll b){
	if (b==0){
		return a;
	}
	return gcd(b,a%b);
}
int main(){
	ll ans=0;
	scanf("%lld%lld",&x,&y);
	for (ll i=1;i<=sqrt(x*y);i++){
		if (x*y%i==0 && gcd(i,x*y/i)==x){
			ans++;
		}
	}
	if (x==y){
		ans--;
	}
	printf("%lld",ans);
	return 0;
}

