#include<bits/stdc++.h>
using namespace std;
int main(){
	// part:define variable
	int a[6][6];
	int m,n;
	// part:input an array
	for (int i=1;i<=5;i++){
		for (int j=1;j<=5;j++){
			cin>>a[i][j];
		}
	}
	// part:input exchange lines data
	cin>>m>>n;
	// part:exchange m and n lines
	for (int i=1;i<=5;i++){
			swap(a[m][i],a[n][i]);
	}
	// part:verify for exchange m and n lines
	for (int i=1;i<=5;i++){
		cout<<endl;
		for (int j=1;j<=5;j++){
			cout<<a[i][j]<<" ";
		}
	}
}
