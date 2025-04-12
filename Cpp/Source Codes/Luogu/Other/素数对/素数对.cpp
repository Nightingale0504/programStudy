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
bool isPrime(int n){
	if (n<=1){
		return false;
	}
	for (int i=2;i<sqrt(n);i++){
		if (n%i==0){
			return false;
		}
	}
	return true;
} 
int main(){
	// part:define variable
	int n;
	bool flag=true;
	// part:enter n
	cin>>n;
	for (int i=2;i<n-1;i++){
		if (isPrime(i)==true && isPrime(i+2)==true){
			cout<<i<<' '<<i+2<<endl;
			flag=false;
		}
	}
	if (flag==true){
		cout<<"empty";
	}
	return 0;
}

