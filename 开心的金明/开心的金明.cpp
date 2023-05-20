#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int w[30],v[30],f[50000];
int n,m;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	printf("%d%d",&m,&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&v[i]);
		scanf("%d",&w[i]);
		w[i]*=v[i];
	} 
	for (int i=1;i<=n;i++){
		for (int j=m;j>=v[i];j--){
			if (j>=v[i]){
				f[j]=max(f[j],f[j-v[i]]+w[i]);
			}
		}
	}
	printf("%d\n",f[m]);
	return 0;
}


