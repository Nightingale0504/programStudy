#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a,c,p,q,r,x;
bool freeze=true;
signed main(){
	scanf("%lld%lld%lld%lld%lld%lld",&a,&c,&p,&q,&r,&x);
	while (x>0){
		printf("%lld %lld\n",a,freeze);
		if (a<c){
			if (x>p){
				x-=p;
				a++;
			}
			continue;
		}
		if (a==c){
			if (x>q){
				x-=q;
				freeze=false;
			}
			continue;
		}
		if (freeze==false){
			if (x>r){
				x-=r;
				a++;
			}
			continue;
		}
	}
	printf("%lld",a);
	return 0;
}

