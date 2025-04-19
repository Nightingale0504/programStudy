#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m,b,g;
int row[5005],column[5005];
int t1,t2,sum;
signed main(){
	scanf("%lld%lld%lld%lld",&n,&m,&b,&g);
	while (b--){
		scanf("%lld%lld",&t1,&t2);
		for (int i=t1;i<=t2;i++){
			row[i]=1;
		}
	}
	while (g--){
		scanf("%lld%lld",&t1,&t2);
		for (int i=t1;i<=t2;i++){
			column[i]=1;
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			if (row[i]==1 || column[j]==1){
				sum++;
			}
		}
	}
	printf("%lld",sum);
	return 0;
}

