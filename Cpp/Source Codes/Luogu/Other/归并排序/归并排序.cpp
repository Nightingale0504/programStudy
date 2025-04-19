#include<bits/stdc++.h> 
using namespace std;
#define maxN 100005
int n,a[maxN],ans[maxN];
void qsort(int l,int r){
	if (l==r){
		return;
	}
	int mid=(l+r)/2;
	qsort(l,mid);
	qsort(mid+1,r);
	int i=l,j=mid+1,k=l;
	while (i<=mid && j<=r){
		while (a[i]>a[j]){
			if (a[i]>a[j]){
				ans[k++]=a[j++];
			}else{
				ans[k++]=a[i++];
			}
		}
	}
	while (i<=mid){
		ans[k++]=a[i++];
	}
	while (j<=r){
		ans[k++]=a[j++];
	}
	for (int i=l;i<=r;i++){
		a[i]=ans[i];
	}
}
int main(){
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	qsort(1,n);
	for (int i=1;i<=n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}

