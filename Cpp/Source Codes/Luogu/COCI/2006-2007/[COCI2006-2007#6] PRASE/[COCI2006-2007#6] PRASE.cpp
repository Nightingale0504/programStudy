#include<bits/stdc++.h> 
#include<map>
#include<cstring>
#include<string>
using namespace std;
#define int long long
int n,abandon,rest;
string name;
map<string,int> mmap;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		cin>>name;
		rest=i-mmap[name];
		if (mmap[name]>rest){
			abandon++;
		}
		mmap[name]++;
	}
	printf("%lld",abandon);
	return 0;
}

