#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1005;
int n,t[maxN],ans;
struct game{
	int money,time;
}a[maxN]; 
inline bool cmp(game a,game b){
	return a.money>b.money;
} 
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i].time);
	}
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i].money);
	}
	sort(a+1,a+n+1,cmp);
	for (int i=1;i<=n;i++){
		bool e=false;
		for (int j=a[i].time;j>=1;j--){
			if (t[j]==0){
				t[j]=1;
				e=true;
				break;
			}
		}
		if (e){
			ans+=a[i].money;
		}
	}
	printf("%lld",ans);
	return 0;
}

