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
// part:define function
int factorial(int n){
	int x;
	if (n==0){
		return 1;
	}
	return factorial(n-1)*n;
}
int main(){
	// part:define variable
	int m;
	// part:enter m
	cin>>m;
	// part:run function with m
	cout<<factorial(m);
	return 0;
}

