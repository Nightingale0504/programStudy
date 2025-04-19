#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n;
signed main(){
	scanf("%lld",&n);
	if (n>0){
		printf("positive");
	}else if (n==0){
		printf("zero");
	}else{
		printf("negative");
	}
	return 0;
}

