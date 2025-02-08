#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,cnt,ans,cur,last;
signed main(){
	scanf("%lld%lld",&n,&cur);
	for (int i=2;i<=n;i++){
		last=cur;
		scanf("%lld",&cur);
		if (cur>last){
			cnt++;
		}else{
			cnt=1;
		}
		ans=max(ans,cnt);
	}
	printf("%lld",ans);
	return 0;
}

