#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1005;
int n,m,k,sum,num,a[maxN][maxN];
signed main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			scanf("%lld",&a[i][j]);
		}
	}
	for (int i=1;i<=n;i++){
		sum=0;
		for (int j=1;j<=m;j++){
			if (a[i][j]==k){
				sum++;
			}
		}
		if (n&1){
			n++;
		}
		if (sum>=n/2){
			num++;
		}
		n--;
	}
	if (m&1){
		m++;
	}
	if (num>=m/2){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}

