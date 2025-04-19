#include<bits/stdc++.h> 
#include<map> 
#include<string>
#include<cstring>
using namespace std;
#define int long long
map<string,int> mmap;
int n,num;
string tmp;
signed main(){
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

