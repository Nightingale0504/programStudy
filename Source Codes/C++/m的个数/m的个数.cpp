#include<bits/stdc++.h>
using namespace std;
// part:define function a
void a(string str,char s){
	int n=0;
	for (int i=0;i<str.size();i++){
		if (str[i]==s){
			n++;
		}
	}
	cout<<n;
}
int main(){
	// part:define variable
	string x;
	char m;
	// part:enter x
	cin>>x>>m;
	// part:run a with x
	a(x,m);
	return 0;
}

