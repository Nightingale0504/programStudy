#include<bits/stdc++.h> 
using namespace std;
int main(){
	// part:define variable
	int m,n;
	int result;
	// part:input m n
	cin>>m>>n;
	// part:create matrixs
	int a[n][m];
	int b[n][m];
	// part:input matrix a
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	// part:input matrix b
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cin>>b[i][j];
		}
	}
	cout<<endl;
	// part:matrix addition & output result
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			cout<<a[i][j]+b[i][j]<<" ";
		}
		cout<<endl;
	}
} 
