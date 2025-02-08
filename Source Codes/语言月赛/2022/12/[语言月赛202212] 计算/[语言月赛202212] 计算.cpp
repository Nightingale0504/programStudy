#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n;
int t1,t2,t3,sum,s2,s3;
int main(){
	scanf("%d",&n);
	t1=n%10;
	n/=10;
	t2=n%10;
	t3=n/10;
	sum=t1+t2+t3;
	s2=sum*sum;
	s3=sum*s2;
	printf("%d\n",sum);
	printf("%d\n",s2);
	printf("%d\n",s3);
	return 0;
}

