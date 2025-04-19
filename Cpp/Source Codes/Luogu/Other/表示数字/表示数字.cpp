#include<bits/stdc++.h> 
#include<cctype>
#include<cstring>
#include<string>
using namespace std;
string s;
int main(){
	cin>>s;
	for (int i=0;i<s.length();i++){
		if (isdigit(s[i])){
			if (i==0 || !isdigit(s[i-1])){
				s.insert(i++,"*");
			}
		}else if (isdigit(s[i-1])){
			s.insert(i++,"*");
		}
	}
	if (isdigit(s[s.length()-1])){
		s+='*';
	}
	cout<<s;
	return 0;
}

