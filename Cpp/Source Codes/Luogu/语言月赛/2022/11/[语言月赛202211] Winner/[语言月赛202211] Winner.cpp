#include<bits/stdc++.h> 
using namespace std;
#define int long long
int k;
signed main(){
	scanf("%lld",&k);
	if (k>2){
		printf("Survivor");
	}else if (k==2){
		printf("Tie");
	}else if (k<2){
		printf("Hunter");
	}
	return 0;
}

