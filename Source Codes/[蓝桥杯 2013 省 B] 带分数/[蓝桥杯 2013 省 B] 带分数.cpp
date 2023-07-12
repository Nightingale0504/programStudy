#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a[15];
int x,y,z;
int n,t,ans;
int work(int l,int r){
	int sum=0;
	for (int i=l;i<=r;i++){
		sum=sum*10+a[i];
	}
	return sum;
}
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	for (int i=0;i<10;i++){
		a[i]=i+1;
	}
	scanf("%lld",&n);
	ans=0;
	do{
		for (int i=0;i<7;i++){
			x=work(0,i);
			if (x>n){
				break;
			}
			for (int j=0;j<8;j++){
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

