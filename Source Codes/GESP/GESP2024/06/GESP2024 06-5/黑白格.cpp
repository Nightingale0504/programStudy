#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
const int maxN=105;
int n,m,k,ans=LLONG_MAX;
char a[maxN][maxN];
signed main(){
	scanf("%lld%lld%lld",&n,&m,&k);
	for (register int i=0;i<n;i++){
		scanf("%s",&a[i]);
	}
	for (register int i=0;i<n;i++){
		for (register int j=0;j<m;j++){
			for (register int x=i;x<n;x++){
				for (register int y=j;y<m;y++){
					int sum=0;
					for (register int o=i;o<=x;o++){
						for (register int p=j;p<=y;p++){
							if (a[o][p]=='1'){
								sum++;
							}
						}
					}
					if (sum>=k){
					   ans=min(ans,(x-i+1)*(y-j+1));
					}
				}
			}
		}
	}
	if (ans==LLONG_MAX){
		printf("0");
	}else{
		printf("%lld",ans);
	}
	return 0;
}

