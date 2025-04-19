#include<bits/stdc++.h> 
using namespace std;
#define maxN 1005 
int a[maxN],f[maxN];
int main(){
	int n,ans;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
		f[i]=1;
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<i-1;j++){
			if (a[i]<a[j]){
				f[i]=max(f[i],f[j]+1);
			}
		}
	}
	for (int i=0;i<n;i++){
		ans=max(ans,f[i]);
	}
	printf("%d",ans);
	return 0;
}


