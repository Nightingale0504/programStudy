#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring> 
#include<cctype>
using namespace std;
string s;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	cin>>s;
	for (int i=0;i<s.size();i++){
		if (isupper(s[i])){
			cout<<s[i];
		}
	}
	return 0;
}

