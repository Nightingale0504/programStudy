#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=5e5+5;
int n,mVoltage,l,r=1e9,mid,p;
struct tower{
	int pos,cr;
}t[maxN];
bool check(int x){
	p=t[1].pos+t[1].cr+x;
	for (int i=2;i<=n;i++){
		if (p>=t[i].pos){
			p=max(p,t[i].pos+t[i].cr+x);
		}else{
			return 1;
		}
	}
	return 0;
}
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld%lld",&t[i].pos,&t[i].cr);
	}
	while (l<=r){
		mid=(r-l)/2+l;
		if (check(mid)){
			l=mid+1;
		}else{
			mVoltage=mid;
			r=mid-1;
		}
	}
	printf("%lld",mVoltage);
	return 0;
}
