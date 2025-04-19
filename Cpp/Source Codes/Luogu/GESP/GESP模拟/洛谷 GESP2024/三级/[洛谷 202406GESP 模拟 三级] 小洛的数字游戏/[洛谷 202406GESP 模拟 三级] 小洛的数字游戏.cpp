#include<bits/stdc++.h> 
using namespace std;
#define int long long
#define c(x) pow(10,x)
const int maxQ=1e6+5;
int n,m,q,t,f;
int a[maxQ];
int calcCnt(int x){
	int cnt=0;
	while (x!=0){
		x/=10;
		cnt++;
	}
	return cnt;
}
signed main(){
	scanf("%lld%lld%lld",&n,&m,&q);
	for (int i=1;i<=q;i++){
		t=n%10;
		n-=t;
		n/=10;
		f=(t*t)%10;
		n+=f*c(calcCnt(n));
		if (m==n){
			break;
		}
		a[i]=n;
	}
	if (n!=m){
		printf("-1");
		return 0;
	}
	for (int i=1;i<=q;i++){
		if (a[i]!=0){
			printf("%lld\n",a[i]);
		}else{
			printf("%lld",m);
			break;
		}
	}
	return 0;
}

