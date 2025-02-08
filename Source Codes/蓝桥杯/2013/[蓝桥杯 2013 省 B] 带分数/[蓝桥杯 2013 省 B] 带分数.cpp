#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a[10]={0,1,2,3,4,5,6,7,8,9};
int x,y,z;
int n,t,ans;
inline int work(int l,int r){
	int sum=0;
	for (register int i=l;i<=r;i++){
		sum=sum*10+a[i];
	}
	return sum;
}
signed main(){
	scanf("%lld",&n);
	ans=0;
	do{
		for (register int i=0;i<7;i++){
			x=work(0,i);
			if (x>n){
				break;
			}
			for (register int j=0;j<8;j++){
				y=work(i+1,j);
				z=work(j+1,8);
				if (y%z==0 && x+y/z==n){
					ans++;
				}
			}
		}
	}while (next_permutation(a,a+9));
	printf("%lld",ans);
	return 0;
}

