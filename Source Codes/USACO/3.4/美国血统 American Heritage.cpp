#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring> 
using namespace std;
string s1,s2;
void F(string s1,string s2){
	if (s1==""){
		return;
	}
	char root=s1[0];
	int l=s2.find(root);
	F(s1.substr(1,l),s2.substr(0,l));
	F(s1.substr(l+1,s1.length()-l-1),s2.substr(l+1,s1.length()-l-1));
	cout<<root;
}
int main(){
	cin>>s2>>s1;
	F(s1,s2);
	return 0;
}

