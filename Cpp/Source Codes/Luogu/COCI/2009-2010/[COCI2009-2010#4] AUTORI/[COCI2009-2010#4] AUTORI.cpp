#include<bits/stdc++.h>  
#include<cctype>
using namespace std;
string s;
int main(){
	cin>>s;
	for (int i=0;i<s.size();i++){
		if (isupper(s[i])){
			cout<<s[i];
		}
	}
	return 0;
}

