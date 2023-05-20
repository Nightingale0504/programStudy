#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
void mov(unsigned long long n,char a,char b,char c){
	if (n==1){
		printf("%c%s%c\n",a,"->",c);
	}else{
		mov(n-1,a,c,b);
		printf("%c%s%c\n",a,"->",c);
		mov(n-1,b,a,c);
	}
}
int main(){
	unsigned long long n,i;
	scanf("%d",&n);
	mov(n,'A','B','C');
	i=pow(2,n)-1;
	printf("%s%d%s","共需移动",i,"次");
	return 0;
}


