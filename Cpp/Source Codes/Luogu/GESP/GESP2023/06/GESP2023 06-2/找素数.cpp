#include<bits/stdc++.h> 
using namespace std;
#define int long long
inline bool f(int x){
	if (x<2){
		return false;
	}
	for (int i=2;i*i<=x;i++){
		if (x%i==0){
			return false;
		}
	}
	return true;
}
int n,m,s;
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=n;i<=m;i++){
		if (f(i)){
			s++;
		}
	}
	printf("%lld",s);
	return 0;
}

