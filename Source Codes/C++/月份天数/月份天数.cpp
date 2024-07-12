#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int year,month;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
int main(){
	scanf("%d",&year);
	scanf("%d",&month);
	if ((year%4==0 && year%100!=0) || year%400==0){
		a[2]=29;
	}
	printf("%d",a[month]);
	return 0;
}

