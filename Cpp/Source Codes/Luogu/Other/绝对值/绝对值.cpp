#include<bits/stdc++.h> 
using namespace std;
// part:define function abs 
int abs(int a){
	if (a>=0){
		return a;
	}else{
		return -a;
	}
}
int main(){
	// part:define variable
	int x;
	// part:enter x
	cin>>x;
	// part:run abs with x
	cout<<abs(x);
	return 0;
}

