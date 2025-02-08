#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n;
// Solution: Recursion
int calcAge(int x){
	if (x==1){
		return 10;
	}
	return calcAge(x-1)+2;
}
signed main(){
	scanf("%lld",&n);
	printf("%lld",calcAge(n));
	return 0;
}

