#include<bits/stdc++.h> 
#include<map>
#include<string>
#include<cstring>
using namespace std;
#define int long long
map<string,int> mmap;
string n;
signed main(){
	mmap["124"]=8;
	mmap["125"]=8;
	mmap["126"]=8;
	mmap["127"]=4;
	cin>>n;
	printf("%lld",mmap.count(n));
	return 0;
}

