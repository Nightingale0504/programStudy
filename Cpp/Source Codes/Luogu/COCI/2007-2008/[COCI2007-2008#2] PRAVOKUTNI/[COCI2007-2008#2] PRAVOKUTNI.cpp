#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1505;
int n,x[maxN],y[maxN],t1,t2,t3,sum; 
signed main(){
	scanf("%lld",&n);
	for (register int i=0;i<n;i++){
		scanf("%lld%lld",&x[i],&y[i]);
	}
	for (register int i=0;i<n;i++){
		for (register int j=i+1;j<n;j++){
			for (register int k=j+1;k<n;k++){
				t1=(x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
				t2=(x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k]);
				t3=(x[j]-x[k])*(x[j]-x[k])+(y[j]-y[k])*(y[j]-y[k]);
				if (t1+t2==t3 || t1+t3==t2 || t2+t3==t1){
					sum++;
				}
			}
		}
	}
	printf("%lld",sum);
	return 0;
}

