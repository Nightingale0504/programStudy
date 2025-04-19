#include<bits/stdc++.h> 
using namespace std;
long long n,s;
int main(){
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

