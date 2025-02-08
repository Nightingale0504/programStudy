#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int x,y,z,w,c=1;
bool flag;
signed main(){
	scanf("%lld%lld%lld%lld",&x,&y,&z,&w);
	while (true){
		if (x==z*c && y==w*c){
			break;
		}
		c++;
		if (c>1000){
			printf("-1");
			return 0;
		}
	}
	printf("%lld",c);
	return 0;
}

