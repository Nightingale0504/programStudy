#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
char root;
string s1,s2;
void F(string s1,string s2){
	if (s1==""){
		return;
	}
	char root=s2[s2.length()-1];
	cout<<root;
	int l=s1.find(root);
	F(s1.substr(0,l),s2.substr(0,l));
	F(s1.substr(l+1,s1.length()-l-1),s2.substr(l,s1.length()-l-1));
}
int main(){
	cin>>s1>>s2;
	F(s1,s2);
	return 0;
}

