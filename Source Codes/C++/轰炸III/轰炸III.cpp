#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,m,x,y,final[105][105];
int a1,a2,b1,b2;
int checkX,checkY;
int map[105][105];
signed main(){
	scanf("%lld%lld%lld%lld",&n,&m,&x,&y);
	for (int i=1;i<=x;i++){
		scanf("%lld%lld%lld%lld",&a1,&b1,&a2,&b2);
		for (int j=a1;j<=a2;j++){
			for (int k=b1;k<=b2;k++){
				map[j][k]++;
				final[j][k]=i;
			}
		}
	}
	for (int i=1;i<=y;i++){
		scanf("%lld%lld",&checkX,&checkY);
		if (map[checkX][checkY]==0){
			printf("N\n");
		}else{
			printf("Y %lld %lld\n",map[checkX][checkY],final[checkX][checkY]);
		}
	}
	return 0;
}

