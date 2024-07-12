#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=15;
int n,m,ans,a[maxN][maxN];
char t;
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			scanf(" %c",&t);
			a[i][j]=t-'0';
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			for (int k=i;k<=n;k++){
				for (int l=j;l<=m;l++){
					int b[2]={0,0};
					for (int o=i;o<=k;o++){
						for (int p=j;p<=l;p++){
							b[a[o][p]]++;
						}
					}
					if (b[0]==b[1]){
						ans=max(ans,(k-i+1)*(l-j+1));
					}
				}
			}
		}
	}
	printf("%lld",ans);
	return 0;
}

