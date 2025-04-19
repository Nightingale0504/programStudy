#include<bits/stdc++.h> 
#include<map>
using namespace std;
#define int long long
int T,n,tmp;
map<int,int> mmap;
signed main(){
	scanf("%lld",&T);
	while (T--){
		mmap.clear();
		scanf("%lld",&n);
		for (int i=0;i<n;i++){
			scanf("%lld",&tmp);
			if (mmap.count(tmp)==0){
				printf("%lld ",tmp);
				mmap[tmp]=1;
			}
		}
		printf("\n");
	}
	return 0;
}

