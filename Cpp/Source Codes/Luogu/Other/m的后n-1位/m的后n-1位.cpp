#include<bits/stdc++.h> 
using namespace std;
// part:define function fun
string fun(string a){
	string x="";
	for (int i=1;i<a.size();i++){
		if(i==1&&a[i]=='0'){
			continue;
		}
		if (a[i]=='0'&&a[i-1]=='0'&&i!=a.size()-1){
			continue;
		}else{
			x+=a[i];
		}
	}
	return x;
}
int main(){
	// part:define variable
	string m;
	// part:enter m
	cin>>m;
	// part:run fun with m
	cout<<fun(m);
	return 0;
}

