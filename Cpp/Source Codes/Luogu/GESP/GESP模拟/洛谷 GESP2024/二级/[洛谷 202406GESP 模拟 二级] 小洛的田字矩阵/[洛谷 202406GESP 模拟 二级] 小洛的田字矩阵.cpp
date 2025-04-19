#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n;
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (j==1 || j==n){
				printf("|");
			}else if (i==1 || i==n){
				printf("-");
			}else if (i==(n+1)/2 && j!=(n+1)/2){
				printf("-");
			}else if (i!=(n+1)/2 && j==(n+1)/2){
				printf("|");
			}else{
				printf("x");
			}
		}
		printf("\n");
	} 
	return 0;
}

