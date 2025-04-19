#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=105;
int k,t;
int a[maxN];
int cnt,pre,c=1;
signed main(){
	scanf("%lld%lld",&k,&t);
	for (int i=1;i<=t;i++){
		scanf("%lld",&a[i]);
	}
	while (k--){
		if (a[c]>0){
			a[c]-=1;
			if (c==pre){
				cnt++;
			}
			pre=c;
			c++;
			if (c>t){
				c=1;
			}
		}
	}
	printf("%lld",cnt);
	return 0;
}

