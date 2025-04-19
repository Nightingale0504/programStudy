#include<bits/stdc++.h> 
#include<map>
#include<climits>
using namespace std;
#define int long long
int n,tmp,ans;
map<int,int> mmap;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&tmp);
		mmap[tmp]++;
		if (mmap[tmp]>=n/2){
			ans=tmp;
		}
	}
	printf("%lld",ans);
	return 0;
}

