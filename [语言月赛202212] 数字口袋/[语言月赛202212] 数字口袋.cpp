#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long n,s;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (long long i=1;;i++){
		s+=i;
		if (s>n){
			return 0;
		}
		printf("%d\n",i);
	} 
	return 0;
}

