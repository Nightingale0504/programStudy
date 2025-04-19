#include<bits/stdc++.h> 
using namespace std;
int n,q;
int len,code;
int a[1010];
int fun(int n){
	int x=1;
	for (int i=1;i<=n;i++){
		x*=10;
	}
	return x;
}
int main(){
	scanf("%d%d",&n,&q);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	int r;
	for (int i=1;i<=q;i++){
		scanf("%d%d",&len,&code);
		r=INT_MAX;
		for (int j=1;j<=n;j++){
			if (a[j]%fun(len)==code){
				if (a[j]<r){
					r=a[j];
				}
			}
		}
		if (r==INT_MAX){
			printf("-1");
		}else{
			printf("%d\n",r);
		}
	}
	return 0;
}

