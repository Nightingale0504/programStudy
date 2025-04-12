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
	int n;
	// part:enter n
	cin>>n;
	// part:define array
	int a[n+1],b[n+1];
	// part:enter a
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	// part:sort a
	for (int i=0;i<n;i++){
		for (int j=0;j<n-i-1;j++){
			if (a[j]<a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	// part:count numbers in a
	for (int i=0;i<n;i++){
		if (a[i]==a[i-1]){
			b[i]=b[i-1]+1;
		}else{
			b[i]=1;
		}
	}
	// part:output result
	for (int i=n-1;i>=0;i--){
		if (a[i]!=a[i+1]){
			cout<<a[i]<<' '<<b[i]<<endl;
		}
	}
	return 0;
}

