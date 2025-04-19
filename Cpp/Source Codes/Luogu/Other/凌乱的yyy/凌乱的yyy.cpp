#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,ans,finish;
struct node{
	int l,r;
}a[1000005];
bool cmp(node x,node y){
	return x.r<=y.r;
}
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld%lld",&a[i].l,&a[i].r);
	}
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++){
		if (finish<=a[i].l){
			ans++;
			finish=a[i].r;
		}
	}
	printf("%lld",ans);
	return 0;
}

