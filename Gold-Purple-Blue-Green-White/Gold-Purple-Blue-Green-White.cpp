#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxN 100005
int n;
long long mentality;
int a[maxN],b[maxN],ans;
int main(){
//	#ifndef ONLINE_JUDGE
//		freopen("tracker.in","r",stdin);
//		freopen("tracker.out","w",stdout);
//	#endif
	scanf("%d%d",&n,&mentality);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for (int i=1;i<=n;i++){
		scanf("%d",&b[i]);
	}
	for (int i=1;i<=n;i++){
		if (mentality>=a[i]){
			ans++;
			mentality+=b[i];
		}
	}
	printf("%d",ans);
	return 0;
}

