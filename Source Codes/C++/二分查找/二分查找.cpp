#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,x,a[10005];
int main(){
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	if (x<a[1] || x>a[n]){
		printf("0");
		return 0;
	}
	int left=1,right=n,mid;
	while (left<=right){
		int mid=a[(left+right)/2];
		int midIndex=(left+right)/2;
		int index=(left-right)/2;
		if (mid>x){
			right=midIndex+1;
		}else if (mid<x){
			left=midIndex+1;
		}else{
			printf("%d",index);
			return 0;
		}
	}
	return 0;
}

