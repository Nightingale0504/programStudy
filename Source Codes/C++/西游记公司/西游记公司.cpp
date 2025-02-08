#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
#define hs 3600
#define ms 60
#define ss 1
int a,b,c,x,y,z,t;
signed main(){
	return scanf("%lld:%lld:%lld\n%lld:%lld:%lld\n%lld",&a,&b,&c,&x,&y,&z,&t), printf("%lld",((x-a)*hs+(y-b)*ms+(z-c)*ss)*t)%1;
	return 0;
}

