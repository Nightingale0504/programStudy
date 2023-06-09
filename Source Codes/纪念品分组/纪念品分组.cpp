#include<iostream>
#include<cstdio>
#include<algorithm>
const int maxN=3e4;
using namespace std;
bool cmp(int x,int y){
	return x>y;
}
int a[maxN]={ 0 },w,n,group=0,sign[maxN];
int main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%d%d",&w,&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n,cmp);
	int l=0,r=n;
	while (l<=r){
		if (a[l]+a[r]<=w){
			l++;
			r--;
			group++;
		}else{
			l++;
			group++;
		}
	}
	printf("%d",group);
	return 0;
}

