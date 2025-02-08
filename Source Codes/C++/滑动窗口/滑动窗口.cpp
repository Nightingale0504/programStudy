#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
const int maxN=1e6;
int n,k,a[maxN+5]; 
struct node{
	int left,right,mmax,mmin;
}tree[maxN<<2];
inline void build(int i,int l,int r){
	tree[i]=(node){l,r,0,0};
	if (l==r){
		tree[i].mmax=tree[i].mmin=a[r];
		return;
	}
	int mid=(tree[i].left+tree[i].right)>>1;
	build(2*i,l,mid);
	build(2*i+1,mid+1,r);
	tree[i].mmax=max(tree[2*i].mmax,tree[2*i+1].mmax);
	tree[i].mmin=min(tree[2*i].mmin,tree[2*i+1].mmin);
}
inline int queryMax(int i,int l,int r){
	if (tree[i].left>=l && tree[i].right<=r){
		return tree[i].mmax;
	}
	int mid=(tree[i].left+tree[i].right)>>1;
	int ans=INT_MIN;
	if (mid>=l){
		ans=max(ans,queryMax(2*i,l,r));
	}
	if (mid<r){
		ans=max(ans,queryMax(2*i+1,l,r));
	}
	return ans;
}
inline int queryMin(int i,int l,int r){
	if (tree[i].left>=l && tree[i].right<=r){
		return tree[i].mmin;
	}
	int mid=(tree[i].left+tree[i].right)>>1;
	int ans=INT_MAX;
	if (mid>=l){
		ans=min(ans,queryMin(2*i,l,r));
	}
	if (mid<r){
		ans=min(ans,queryMin(2*i+1,l,r));
	}
	return ans;
}
signed main(){
	scanf("%lld%lld",&n,&k);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	build(1,1,n);
	for (int i=1;i+k-1<=n;i++){
		printf("%lld ",queryMin(1,i,i+k-1));
	}
	printf("\n");
	for (int i=1;i+k-1<=n;i++){
		printf("%lld ",queryMax(1,i,i+k-1));
	}
	return 0;
}

