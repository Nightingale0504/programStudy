#include<bits/stdc++.h> 
using namespace std;
#define int long long
int a,b,c,d,f;
signed main(){
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	f=__gcd(a,c);
	if ((d-b)%f==0){
		for (int x=0;x<=99999;x++){
			for (int y=0;y<=99999;y++){
				if (a*x-c*y==d-b){
					f=b+a*x;
					printf("%lld",f);
					return 0;
				}
			}
		}
	}else{
		printf("-1");
	}
	return 0;
}

