#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
#define int long long
int n;
string tmp; 
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		cin>>tmp;
		if (tmp!="AC"){
			printf("%lld ",i);
		}
	}
	return 0;
}

