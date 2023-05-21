#include<bits/stdc++.h>
using namespace std;
double costCalc(int a){
	double cost;
	if (a<=70){
		cost=0.1;
	}
	if (a>70){
		cost=0.1*ceil(a*1.0/70);
	}
	return cost;
}
int main(){
	// part:define variable
	int n;
	double result=0;
	// part:enter n
	cin>>n;
	int m=n+1;
	// part:define array
	int l[m];
	double c[m];
	// part:enter message length
	for (int i=0;i<n;i++){
		cin>>l[i];
	}
	// part:calculation c
	for (int i=0;i<n;i++){
		c[i]=costCalc(l[i]);
	}
	// part:calculation result
	for (int i=0;i<n;i++){
		result+=c[i];
	}
	// part:output result
	cout<<endl;
	cout<<fixed<<setprecision(1)<<result;
	return 0;
}

