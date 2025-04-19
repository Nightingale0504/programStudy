#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxM=2e6+5;
struct node{
	int left,right,mmax;
}tree[maxM<<2];
int n,k,a[maxM];
inline void build(int i,int l,int r){
	tree[i].left=l;
	tree[i].right=r;
	if (l==r){
		tree[i].mmax=a[r];
		return;
	}
	int mid=(tree[i].left+tree[i].right)>>1;
	build(2*i,l,mid);
	build(2*i+1,mid+1,r);
	tree[i].mmax=max(tree[2*i].mmax,tree[2*i+1].mmax);
}
inline int query(int i,int l,int r){
	if (tree[i].left>=l && tree[i].right<=r){
		return tree[i].mmax;
	}
	int mid=(tree[i].left+tree[i].right)>>1;
	int mmax=INT_MIN;
	if (mid>=l){
		mmax=max(mmax,query(2*i,l,r));
	}
	if (mid<r){
		mmax=max(mmax,query(2*i+1,l,r));
	}
	return mmax;
}
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	build(1,1,n);
	for (int i=1;i<=n-k+1;i++){
		printf("%lld\n",query(1,i,i+k-1));
	}
	return 0;
}

