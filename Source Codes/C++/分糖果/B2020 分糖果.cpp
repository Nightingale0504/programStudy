#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a[5],sum;
signed main(){
	for (register int i=0;i<5;i++){
		scanf("%lld",&a[i]);
	}
	for (register int i=0;i<5;i++){
		sum+=a[i]%3;
		a[i]/=3;
		if (i==0){
			a[4]+=a[i];
		}else{
			a[i-1]+=a[i];
		}
		if (i==4){
			a[0]+=a[i];
		}else{
			a[i+1]+=a[i];
		}
	}
	for (register int i=0;i<5;i++){
		printf("%lld ",a[i]);
	}
	printf("\n%lld",sum);
	return 0;
}

