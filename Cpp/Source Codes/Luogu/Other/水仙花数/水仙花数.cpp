#include<bits/stdc++.h> 
using namespace std;
#define int long long
int ans;
signed main(){
	for (int i=100;i<=999;i++){
		int a=i%10,b=i/10%10,c=i/100;
		if (a*a*a+b*b*b+c*c*c==i){
			printf("%lld ",i);
		}
	}
	return 0;
}

