#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
#define int long long
int k;
inline int convert(int a){
	int x=0,y=0;
	while (a>0){
		x+=(a%k)*pow(10,y);
		y++;
		a/=k;
	}
	return x;
}
signed main(){
	scanf("%lld",&k);
	for (int i=1;i<k;i++){
		for (int j=1;j<k;j++){
			printf("%lld ",convert(i*j));
		}
		printf("\n");
	}
	return 0;
}

