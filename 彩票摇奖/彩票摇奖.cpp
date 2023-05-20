#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int n,a[10],num[10]={ 0 };
	scanf("%d",&n);
	for (int i=1;i<=7;i++){
		scanf("%d",&a[i]);
	}
	while (n--){
		int ans=0;
		for (int i=1;i<=7;i++){
			int x;
			scanf("%d",&x);
			for (int j=1;j<=7;j++){
				if (a[j]==x){
					ans++;
				}
			}
		}
		num[ans]++;
	}
	for (int i=7;i;i--){
		cout<<num[i]<<(i==1?'\n':' ');
	}
	return 0;
}

