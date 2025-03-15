#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int x,y;
signed main(){
	scanf("%lld%lld",&x,&y);
	if (x>=-1 && x<=1 && y>=-1 && y<=1){
		printf("yes");
	}else{
		printf("no");
	}
	return 0;
}

