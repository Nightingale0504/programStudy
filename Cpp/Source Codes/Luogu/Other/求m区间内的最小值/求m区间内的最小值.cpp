#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=2e6;
int n,m,a[maxN+5]; 
struct node{
	int left,right,mmin;
}tree[maxN<<2];
inline void build(int i,int l,int r){
	tree[i]=(node){l,r,0};
	if (l==r){
		tree[i].mmin=a[r];
		return;
	}
	int mid=(tree[i].left+tree[i].right)>>1;
	build(2*i,l,mid);
	build(2*i+1,mid+1,r);
	tree[i].mmin=min(tree[2*i].mmin,tree[2*i+1].mmin);
}
inline int query(int i,int l,int r){
	if (tree[i].left>=l && tree[i].right<=r){
		return tree[i].mmin;
	}
	int mid=(tree[i].left+tree[i].right)>>1;
	int ans=INT_MAX;
	if (mid>=l){
		ans=min(ans,query(2*i,l,r));
	}
	if (mid<r){
		ans=min(ans,query(2*i+1,l,r));
	}
	return ans;
}
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	build(1,1,n);
	printf("0\n");
	for (int i=2;i<=n;i++){
		printf("%lld\n",query(1,max((long long)1,i-m),i-1));
	}
	return 0;
}

