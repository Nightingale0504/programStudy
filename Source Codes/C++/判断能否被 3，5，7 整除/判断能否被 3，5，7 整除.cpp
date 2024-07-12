#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n;
bool f3=false,f5=false,f7=false;
signed main(){
	scanf("%lld",&n);
	if (n%3==0){
		printf("3 ");
		f3=true;
	}
	if (n%5==0){
		printf("5 ");
		f5=true;
	}
	if (n%7==0){
		printf("7");
		f7=true;
	}
	if (f3==false && f5==false && f7==false){
		printf("n");
	}
	return 0;
}

