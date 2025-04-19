#include<bits/stdc++.h> 
using namespace std;
int n;
#define int long long
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		printf("Z");
	}
	printf("\n");
	n-=2;
	int t=n,k=1;
	for (int i=0;i<t;i++){
		for (int j=0;j<n;j++){
			printf("-");
		}
		printf("Z");
		for (int j=0;j<k;j++){
			printf("-");
		}
		printf("\n");
		k++;
		n--;
	}
	t+=2;
	for (int i=0;i<t;i++){
		printf("Z");
	}
	return 0;
}

