#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,x;
bool judge(int x,int a){
	if (x*x*x==a){
		return true;
	}
	return false;
}
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		if (judge(i,n)){
			x++;
		}
	}
	if (x==1){
		printf("Yes");
		return 0;
	}
	printf("No");
	return 0;
}

