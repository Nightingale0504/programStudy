#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
string s;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	cin>>s;
	for (int i=0;i<s.length();i++){
		if (s[i]>='0' && s[i]<='9'){
			if (i==0 || (s[i-1]<'0' || s[i-1]>'9')){
				s.insert(i++,"*");
			}
		}else if (s[i-1]>='0' && s[i-1]<='9'){
			s.insert(i++,"*");
		}
	}
	if (s.back()>='0' && s.back()<='9'){
		s+='*';
	}
	cout<<s;
	return 0;
}

