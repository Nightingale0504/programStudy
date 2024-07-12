#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long w;
int main(){
	scanf("%lld",&w);
	if (w<=0){
		printf("0");
		return 0;
	}
	unsigned long long k=w;
	cout<<2*k-1;
	return 0;
}

