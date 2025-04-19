#include<bits/stdc++.h> 
using namespace std;
#define int long long
int x,y;
signed main(){
	scanf("%lld%lld",&x,&y);
	if (x>y){
		printf(">");
	}else if (x==y){
		printf("=");
	}else{
		printf("<");
	}
	return 0;
}

