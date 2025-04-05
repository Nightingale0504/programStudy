#include<bits/stdc++.h>
using namespace std;
// part:define function numMerge
string numMerge2(string a,string b){
	string c=a[0]+b[0]+b[1]+a[1]; 
	return c;
}
string numMerge(string a,string b){
	string c=a.insert(1,b);
	return c;
}
int main(){
	// part:define variable
	string m,n;
	// part:enter n and m
	cin>>n>>m;
	// part:run numMerge and numMerge2 with n and m
	cout<<numMerge(n,m)<<endl<<numMerge2(n,m);
	return 0;
}

