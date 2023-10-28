#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map> 
#include<string>
#include<cstring>
using namespace std;
#define int long long
map<string,int> mmap;
int n,num;
string tmp;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	while (n--){
		cin>>tmp;
		if (mmap[tmp]==0){
			num++;
			mmap[tmp]=1;
		}
	}
	printf("%lld",num);
	return 0;
}

