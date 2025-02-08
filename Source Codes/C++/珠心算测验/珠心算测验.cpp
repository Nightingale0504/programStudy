#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int M=20005;
int t[M],g[M];
int n,a[105],ans,maxn;
int main(){
	scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        g[a[i]]=1;
    }
    for (int i=1;i<n;i++){
        for (int j=i+1;j<=n;j++){
            t[a[i]+a[j]]++;
            maxn=max(maxn,a[i]+a[j]);
        }
    }
    for (int i=1;i<=maxn;i++){
        if (t[i]>0 && g[i]){
        	ans++;
		}
    }
    printf("%d\n",ans);
	return 0;
}

