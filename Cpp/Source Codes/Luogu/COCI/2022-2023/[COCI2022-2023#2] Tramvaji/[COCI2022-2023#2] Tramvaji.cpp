#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e3+5;
int n,y,t,a[maxN];
int mmin=INT_MAX,ans;
string s;
signed main(){
	scanf("%lld",&n);
	for (int i=2;i<=n;i++){
		cin>>s;
		if (s=="Patrik"){
			scanf("%lld",&t);
			a[i]=t;
		}else{
			scanf("%lld%lld",&y,&t);
			a[i]=a[y]+t;
		}
	}
	for (int i=2;i<=n;i++){
		if (a[i]-a[i-1]<mmin){
			mmin=a[i]-a[i-1];
			ans=i;
		}
	}
	printf("%lld %lld %lld",mmin,ans-1,ans);
	return 0;
}

