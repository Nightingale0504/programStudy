#include<bits/stdc++.h> 
using namespace std;
#define int long long
int a[17]={284,1210,2924,5564,6386,10856,14595,18416,66992,71145,76084,87633,88730};
int b[17]={220,1184,2620,5020,6232,10744,12285,17296,66928,67095,63020,69615,79750};
int s;
signed main(){
	scanf("%lld",&s);
	for (int i=0;i<15;i++){
		if (b[i]>=s){
			printf("%lld %lld",b[i],a[i]);
			exit(0);
		}
		if (a[i]>=s){
			printf("%lld %lld",a[i],b[i]);
			exit(0);
		}
	}
	return 0;
}

