#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxM=1e5+5;
struct node{
	int left,right,sum,lazy;
}tree[maxM<<2];
int n,m,a[maxM],opt,x,y,k;
inline void build(int i,int l,int r){
	tree[i]=(node){l,r,0};
	if (l==r){
		tree[i].sum=a[r];
		return;
	}
	int mid=(tree[i].left+tree[i].right)>>1;
	build(2*i,l,mid);
	build(2*i+1,mid+1,r);
	tree[i].sum=tree[2*i].sum+tree[2*i+1].sum;
}
inline void pushdown(int i){
	if (tree[i].lazy==0){
		return;
	}
	tree[2*i].sum+=(tree[2*i].right-tree[2*i].left+1)*tree[i].lazy;
	tree[2*i+1].sum+=(tree[2*i+1].right-tree[2*i+1].left+1)*tree[i].lazy;
	tree[2*i].lazy+=tree[i].lazy;
	tree[2*i+1].lazy+=tree[i].lazy;
	tree[i].lazy=0;
}
inline int query(int i,int l,int r){
	if (tree[i].left>=l && tree[i].right<=r){
		return tree[i].sum;
	}
	pushdown(i);
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
inline void update(int i,int l,int r){
	if (tree[i].left>=l && tree[i].right<=r){
		tree[i].sum+=(tree[i].right-tree[i].left+1)*k;
		tree[i].lazy+=k;
		return;
	}
	pushdown(i);
	int mid=(tree[i].left+tree[i].right)>>1;
	if (mid>=l){
		update(2*i,l,r);
	}
	if (mid<r){
		update(2*i+1,l,r);
	}
	tree[i].sum=tree[2*i].sum+tree[2*i+1].sum;
}
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
	build(1,1,n);
	while (m--){
		scanf("%lld",&opt);
		if (opt==1){
			scanf("%lld%lld%lld",&x,&y,&k);
			update(1,x,y);
		}else{
			scanf("%lld%lld",&x,&y);
			printf("%lld\n",query(1,x,y));
		}
	}
	return 0;
}
