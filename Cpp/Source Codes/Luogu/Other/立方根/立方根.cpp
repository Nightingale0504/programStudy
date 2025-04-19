#include<bits/stdc++.h> 
using namespace std;
long long n,mid,m,k;
int main(){
	scanf("%lld",&n);
	long long l=1,r=100000;
	while (l<=r){
		mid=(l+r)/2;
		m=mid*mid*mid;
		k=mid+1;
		if (m==n || (m<n && k*k*k>n)){
			printf("%lld",mid);
			return 0;
		}else if (m>n){
			r=mid-1;
		}else if (m<n){
			l=mid+1;
		}
	}
	return 0;
}

