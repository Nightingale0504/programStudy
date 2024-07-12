#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
int minX,maxX;
int minY,maxY;
int tmp;
signed main(){
	scanf("%lld%lld%lld%lld",&minX,&maxX,&minY,&maxY);
	tmp=maxX*maxY;
	if (tmp>=INT_MAX){
		printf("long long int");
	}else{
		printf("int");
	}
	return 0;
}

