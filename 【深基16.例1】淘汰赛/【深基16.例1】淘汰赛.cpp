#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n;
struct state{
	int power,id;
}a[150],tree[600];
state maxt(state a,state b){
	return a.power>b.power?a:b;
}
state mint(state a,state b){
	return a.power<b.power?a:b;
}
void build(int node,int start,int end){
	if (start==end){
		return;
	}
	int l=node*2,r=node*2+1,mid=(start+end)/2;
	build(l,start,mid);
	build(r,mid+1,end);
	tree[node]=maxt(tree[l],tree[r]);
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	scanf("%d",&n);
	for (int i=1;i<=(1<<n);i++){
		scanf("%d",&a[i].power);
		a[i].id=i; 
	}
	build(1,1,(1<<n));
	printf("%d",mint(tree[2],tree[3]).id);
	return 0;
}

