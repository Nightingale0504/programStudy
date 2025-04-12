#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<climits>
#include<cmath>
using namespace std;
int main(){
	// part:define variable
	int a,b,c,result=0;
	// part:enter a,b and c
	cin>>a>>b>>c;
	// part:calculation result
	result+=a*20/100;
	result+=b*30/100;
	result+=c*50/100;
	// part:output result
	cout<<result;
	return 0;
}


/*
	printf("%d",result);
	%d -- int
	%f -- float
	%lf -- double
	%c -- char
*/ 
