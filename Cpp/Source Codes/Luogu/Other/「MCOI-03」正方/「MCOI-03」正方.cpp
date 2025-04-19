#include<bits/stdc++.h> 
using namespace std;
#define int unsigned long long
int a,b,c,d,q;
signed main(){
	scanf("%llu",&q);
	while (q--){
		scanf("%llu%llu%llu%llu",&a,&b,&c,&d);
		if (a==b && a==c && a==d && b==c && b==d && c==d){
			printf("1\n");
		}else if (a+b==c+d || a+c==b+d || a+d==b+c){
			if (a==b || a==c || a==d || b==c || b==d || c==d){
				printf("4\n");
			}else if (a!=b || a!=c || a!=d || b!=c || b!=d || c!=d){
				printf("8\n");
			}
		}else{
			printf("0\n");
		}
	}
	return 0;
}

