#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int x,y,z;
int ans;
inline int judge(int a,int b,int c){
	if (a+b>c && a+c>b && b+c>a){
		return 1;
	}
	return 0;
}
signed main(){
	scanf("%lld%lld%lld",&x,&y,&z);
	ans=judge(x,y,z);
	printf("%lld",ans);
	return 0;
}

