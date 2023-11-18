#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxM=1e5+5;
struct node{
	int left,right,sum;
}tree[maxM<<2];
int n,m,a[maxM];
inline void build(int i,int l,int r){
	tree[i]={l,r,0};
	if (l==r){
		tree[i].sum=a[r];
		return;
	}
	int mid=(tree[i].left+tree[i].right)>>1;
	build(2*i,l,mid);
	build(2*i+1,mid+1,r);
	tree[i].sum=tree[2*i].sum+tree[2*i+1].sum;
}
inline int query(int i,int l,int r){
	if (tree[i].left>=l && tree[i].right<=r){
		return tree[i].sum;
	}
	int mid=(tree[i].left+tree[i].right)>>1;
	int ans=0;
	if (mid>=l){
		ans+=query(2*i,l,r);
	}
	if (mid<r){
		ans+=query(2*i+1,l,r);
	}
	return ans;
} 
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	build(1,1,n);
	printf("%lld",query(1,1,3));
	return 0;
}

