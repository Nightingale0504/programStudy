#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e4+5;
bool flag;
int n;
signed main(){
	scanf("%lld",&n);
	while (n--){
		int t;
		flag=false;
		scanf("%lld",&t);
		for (int i=1;i<=maxN;i++){
			for (int j=1;j<=maxN;j++){
				if (i*i+j*j==t){
					if (flag){
						break;
					}
					printf("Yes\n");
					flag=true;
				}
			}
		}
		if (!flag){
			printf("No\n");
		}
	}
	return 0;
}

