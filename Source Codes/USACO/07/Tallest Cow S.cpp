#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxR=1e4+5;
int n,m,h,q,a[maxR],book[maxR][maxR],x,y;
signed main(){
	scanf("%lld%lld%lld%lld",&n,&m,&h,&q);
	for (int i=1;i<=n;i++){
		a[i]=h;
	}
	while (q--){
		scanf("%lld%lld",&x,&y);
		if (x>y){
			swap(x,y);
		}
		if (book[x][y]==0){
		   book[x][y]=1;
		   for (int i=x+1;i<y;i++){
		   	    a[i]--;
		    }
		}
	}
	for (int i=1;i<=n;i++){
		printf("%lld\n",a[i]);
	}
	return 0;
}

