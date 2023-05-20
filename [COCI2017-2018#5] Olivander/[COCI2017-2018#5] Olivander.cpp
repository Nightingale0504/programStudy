#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxN 105
int n;
long long box[maxN],wand[maxN];
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&wand[i]);
	}
	for (int i=0;i<n;i++){
		scanf("%lld",&box[i]);
	}
	sort(wand,wand+n);
	sort(box,box+n);
	for (int i=0;i<n;i++){
		if (wand[i]>box[i]){
			printf("NE");
			return 0;
		}
	}
	printf("DA");
	return 0;
}

