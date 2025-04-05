#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a;
double w,b;
signed main(){
	scanf("%lld",&a);
	w=a/1.2;
	b=27.0+23.0+a/3.0;
	if (w<b){
		printf("Walk");
	}else if (w>b){
		printf("Bike");
	}else{
		printf("All");
	}
	return 0;
}

