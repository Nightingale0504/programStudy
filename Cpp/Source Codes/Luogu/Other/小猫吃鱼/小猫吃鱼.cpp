#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,finalCost,fishCost[105],oilCost[105],mmin=INT_MAX;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld%lld",&fishCost[i],&oilCost[i]);
	}
	for (int i=0;i<n;i++){
		if (mmin>fishCost[i]){
			mmin=fishCost[i];
		}
		finalCost+=mmin;
		mmin+=oilCost[i];
	}
	printf("%lld\n",finalCost);
	return 0;
}
