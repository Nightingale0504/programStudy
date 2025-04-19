#include<bits/stdc++.h> 
using namespace std;
#define int long long
bool f;
int k;
signed main(){
	scanf("%lld",&k);
	for (int i=10000;i<=30000;i++){
		if (i/100%k==0){
			if ((i/10-i/10000*1000)%k==0){
				if ((i-i/1000*1000)%k==0){
					printf("%lld\n",i);
					f=1;
				}
			}
		}
	}
	if (!f){
		printf("No");
	}
	return 0;
}

