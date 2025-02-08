#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int x,y;
inline int gcd(int a,int b){
	if (b==0){
		return a;
	}else{
		return gcd(b,a%b);
	}
} 
signed main(){
	scanf("%lld%lld",&x,&y);
	printf("%lld",gcd(x,y));
	return 0;
}

