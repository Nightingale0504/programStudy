#include<bits/stdc++.h> 
using namespace std;
#define int unsigned long long
int t,a;
signed main(){
	scanf("%llu",&t);
	while (t--){
		scanf("%llu",&a);
		if (__builtin_popcountll(a)>=3){
			printf("No,Commander\n");
		}else{
			while (1){
				a++;
				if (__builtin_popcountll(a)<3){
					printf("%llu\n",a);
					break;
				}
			}
		}
	}
	return 0;
}

