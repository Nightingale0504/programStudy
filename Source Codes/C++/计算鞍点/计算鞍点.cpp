#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
int a[10][10],h[10],l[10],maxH,minL;
bool judge;
signed main(){
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	for (int i=0;i<5;i++){
		maxH=-1;
		for (int j=0;j<5;j++){
			if (a[i][j]>maxH){
				h[i]=j;
				maxH=a[i][j];
			}
		}
	}
	for (int i=0;i<5;i++){
		minL=INT_MAX;
		for (int j=0;j<5;j++){
			if (a[j][i]<minL){
				l[i]=j;
				minL=a[j][i];
			}
		}
	}
	for (int i=0;i<5;i++){
		if (i==l[h[i]]){
			printf("%lld %lld %lld",i+1,h[i]+1,a[i][h[i]]);
			judge=true;
		}
	}
	if (!judge){
		printf("not found\n");
	}
	return 0;
}

