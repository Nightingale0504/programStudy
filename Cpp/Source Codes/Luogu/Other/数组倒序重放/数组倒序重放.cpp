#include<bits/stdc++.h> 
using namespace std;
int main(){
	// part:define variable
	int n;
	// part:enter n
	cin>>n;
	// part:define array
	int a[n+1];
	// part:enter a
	for (int i=0;i<n;i++){
		cin>>a[i];
	} 
	// part:output result
	for (int i=n-1;i>=0;i--){
		cout<<a[i]<<' ';
	}
	return 0;
}

