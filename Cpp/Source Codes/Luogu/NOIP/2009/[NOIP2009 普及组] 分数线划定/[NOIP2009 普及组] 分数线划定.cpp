#include<bits/stdc++.h> 
using namespace std;
#define int long long
struct node{
	int id,s;
}a[5005],b[5005];
int sl,ans;
int n,m;
bool cmp(node x,node y){
	if (x.s==y.s){
		return x.id<y.id;
	}
	return x.s>y.s;
}
signed main(){
 	scanf("%lld%lld",&n,&m);
	m=m*150/100;
	for (int i=0;i<n;i++){
		scanf("%lld%lld",&a[i].id,&a[i].s);
	}
	sort(a,a+n,cmp);
	sl=a[m-1].s;
	for (int i=0;i<n;i++){
		if (a[i].s>=sl){
			ans++;
			b[i].id=a[i].id;
			b[i].s=a[i].s;
		}
	}
	sort(b,b+n,cmp);
	printf("%lld %lld\n",sl,ans);
	for (int i=0;i<ans;i++){
		printf("%lld %lld\n",b[i].id,b[i].s);
	}
	return 0;
}

