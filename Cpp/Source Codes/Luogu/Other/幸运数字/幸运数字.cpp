#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,sum,year;
int month[13]={ 0,31,28,31,30,31,30,31,31,30,31,30,31 };
bool injury(int x){
	if (x>=10){
		if (x/10==n || x%10==n){
			return true;
		}
	}else{
		if (x==n){
			return true;
		}
	}
	return false;
}
signed main(){
	scanf("%lld%lld",&year,&n);
	if ((year%4==0 && year%100!=0) || year%400==0){
		month[2]=29;
	}
 	for (int i=1;i<=12;i++){
		if (injury(i)){
			sum+=month[i];
		}else{
			for (int j=1;j<=month[i];j++){
				if (injury(j)){
					sum++;
				}
			}
		}
	}
	printf("%lld",sum);
	return 0;
}

