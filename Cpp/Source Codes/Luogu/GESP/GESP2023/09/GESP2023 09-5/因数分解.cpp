#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,t,s,p=0; 
signed main(){
	scanf("%lld",&n);
	t=n;
	for (int i=2;i*i<=n;i++){
		if (t%i==0){
			s=0;
			while (t%i==0){
				t/=i;
				s++;
			}
			if (p){
				printf("* ");
			}
			if (s!=1){
				printf("%lld^%lld ",i,s);
				p=1;
			}else{
				printf("%lld ",i);
				p=1;
			}
		}
	}
	if (t!=1){
		if (t!=n){
			printf("* %lld",t);
		}else{
			printf("%lld",t);
		}
	}
	return 0;
}

