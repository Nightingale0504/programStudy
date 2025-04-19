#include<bits/stdc++.h> 
using namespace std;
// part:define function
long long pell(int n){
	if (n==1 || n==2){
		return n;
	}else{
		return 2*pell(n-1)+pell(n-2);
	}
}
int main(){
	// part:define variable
	int n;
	// part:enter n
	cin>>n;
	// part:define array
	int k[n+1];
	// part:enter k
	for (int i=0;i<n;i++){
		cin>>k[i];
	}
	// part:output result
	cout<<endl;
	for (int i=0;i<n;i++){
		cout<<pell(k[i])%32767;
		if (n!=n-1){
			cout<<endl;
		}
	}
	return 0;
}

