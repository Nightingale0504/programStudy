#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
#define int long long
int cnt;
string s1,s2,s="abcdefghijklmnopqrstuvwxyz";
bool f(char c){
	if (c>='a'&&c<='z' || c>='A'&&c<='Z'){
		return true;
	}
	return false;
}
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	getline(cin,s1);
	for (int i=0;i<s.length();i++){
		for (int j=0;j<s1.length();j++){
			while (!f(s1[cnt])){
				s2+=s1[cnt];
				cnt++;
			}
			if (s[i]==s1[j] || s[i]==s1[j]+32){
				s2+=s1[j];
				cnt++;
			}
		}
	}
	cout<<s2;
	return 0;
}
