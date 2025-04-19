#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=2e5+5;
int n,m,w,a[maxN];
int ans,cnt,num;
bool cmp(int a,int b){
	return a>b;
}
signed main(){
	scanf("%lld%lld%lld",&n,&m,&w);
	for (int i=0;i<n;i++){
		scanf("%lld",&a[i]);
	}
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++){
		cnt+=a[i];
		num++;
		if (num==m){
			if (cnt<w){
				ans+=cnt;
			}else{
				ans+=w;
			}
			num=cnt=0;
		}
	}
	if (cnt<w){
		ans+=cnt;
	}else{
		ans+=w;
	}
	printf("%lld",ans);
	return 0;
}

