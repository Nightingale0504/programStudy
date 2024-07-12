#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	int n,a[100005],m,x,l,r;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	while (m--){
		scanf("%d",&x);
		if (x<a[1]){
			printf("%d%c",a[1],'\n');
		}else if (x>a[n]){
			printf("%d%c",a[n],'\n');
		}else{
			l=1;
			r=n;
			while (l+1<r){
				int mid=(l+r)/2;
				if (a[mid]>=x){
					r=mid;
				}else{
					l=mid;
				}
			}
			if (abs(a[l]-x)<=abs(a[r]-x)){
				printf("%d%c",a[l],'\n');
			}else{
				printf("%d%c",a[r],'\n');
			}
		}
	}
	return 0;
}


