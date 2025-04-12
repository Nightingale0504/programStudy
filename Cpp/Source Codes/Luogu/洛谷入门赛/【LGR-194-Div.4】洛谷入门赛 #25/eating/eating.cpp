#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e5+5;
int tmp,n,mina=INT_MAX,mmax=INT_MIN,id;
int a[maxN],b[maxN],c[maxN];
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld%lld",&a[i],&b[i]);
		c[i]=b[i]/a[i];
	}
	for (int i=1;i<=n;i++){
		tmp=mmax;
		mmax=max(mmax,c[i]);
		if (tmp!=mmax && a[i]<mina){
			mina=a[i];
			id=i;
		}
	} 
	printf("%lld",id);
	return 0;
}

