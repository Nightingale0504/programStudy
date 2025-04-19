#include<bits/stdc++.h> 
using namespace std;
int main(){
	int x;
	bool p;
	scanf("%d",&x);
	p=(x%400==0) || (x%4==0) && (x%100!=0);
	printf("%d",p);
	return 0;
}

