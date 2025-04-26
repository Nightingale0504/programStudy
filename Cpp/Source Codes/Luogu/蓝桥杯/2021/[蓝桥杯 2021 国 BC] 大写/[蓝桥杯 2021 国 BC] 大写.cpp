#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin>>s;
	for (int i=0;i<s.size();i++){
		s[i]=toupper(s[i]);
	}
	cout<<s;
	return 0;
}

