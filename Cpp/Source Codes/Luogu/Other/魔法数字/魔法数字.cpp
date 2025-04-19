#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m,t;
signed main(){
	scanf("%lld",&n);
	for (int i=1;;i++){
		t=pow(2,i);
		if (t<n){
			if (i%2==0){
				m=i;
			}
		}else{
			break;
		}
	}
	printf("%lld",m);
	return 0;
}

