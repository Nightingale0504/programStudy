#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
#define int long long
string s;
char caseReversal(char &ch){
	if (ch>='a' && ch<='z'){
		ch=toupper(ch);
	}else if (ch>='A' && ch<='Z'){
		ch=tolower(ch);
	}
	return ch;
}
char shiftPlace(char &ch){
	if ((ch>='a' && ch<='w') || (ch>='A' && ch<='W')){
		ch+=3;
	}else if ((ch>='x' && ch<='z') || (ch>='X' && ch<='Z')){
		ch-=23;
	}
	return ch;
}
signed main(){
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),caseReversal);
	reverse(s.begin(),s.end());
	transform(s.begin(),s.end(),s.begin(),shiftPlace);
	cout<<s;
	return 0;
}

