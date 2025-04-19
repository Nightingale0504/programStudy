#include<bits/stdc++.h> 
using namespace std;
#define int long long
struct node{
	int m,v;
}a[105];
bool cmp(node x,node y){
	return x.m*y.v>y.m*x.v;
}
int n,t,l,c;
double ans;
signed main(){
	scanf("%lld%lld",&n,&t);
	for (int i=0;i<n;i++){
		scanf("%lld%lld",&a[i].m,&a[i].v);
	}
	sort(a,a+n,cmp);
	c=t;
	for (int i=0;i<n;i++){
		l=i;
		if (a[i].m>c){
			break;
		}
		c-=a[i].m;
		ans+=a[i].v;
	}
	if (l<n){
		ans+=1.0*c/a[l].m*a[l].v;
	}
	printf("%.2f",ans);
	return 0;
}

