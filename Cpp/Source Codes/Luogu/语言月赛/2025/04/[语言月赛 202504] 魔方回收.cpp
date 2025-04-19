#include<bits/stdc++.h> 

#define int long long
using namespace std;
int n,ans;
int x,y,z;
signed main(){
	scanf("%lld",&n);
	while (n--){
		int a,e,c;
		scanf("%lld%lld%lld",&a,&e,&c);
		x+=(8-a);
		y+=(12-e);
		if (c==0){
			z++;
		}
	}
	if (x<8 || y<12 || z==0){
		printf("0");
		return 0;
	}else{
		while (1){
			if (x<8 || y<12 || z==0){
				break;
			}
			ans++;
			x-=8;
			y-=12;
			z--;
		}
	}
	printf("%lld",ans);
	return 0;
}

