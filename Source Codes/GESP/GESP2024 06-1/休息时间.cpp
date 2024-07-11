#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int h,m,s,k; 
signed main(){
	scanf("%lld%lld%lld%lld",&h,&m,&s,&k);
	s+=k;
	if (s>=60){
		while (s>=60){
			s-=60;
			m+=1;
		}
	}
	if (m>=60){
		while (m>=60){
			m-=60;
			h+=1;
		}
	}
	printf("%lld %lld %lld",h,m,s);
	return 0;
}

