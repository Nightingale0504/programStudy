#include<bits/stdc++.h> 
using namespace std;
int a=0,b=0,c=0,d=0,n;
int main(){
	scanf("%d",&n);
	if(n%2==0 && n>4 && n<=12) a=1;
	if(n%2==0 || n>4 && n<=12 || n%2==0 && n>4 && n<=12) b=1;
	if(n%2==0 && n<=4 && n>12 || n>4 && n<=12 && n%2==1) c=1;
	if(n%2==1 && n<=4 || n%2==1 && n>12) d=1;
	printf("%d %d %d %d\n",a,b,c,d);
	return 0;
}

