#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<cctype>
using namespace std;
#define int long long
string s;
int sum;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	cin>>s;
	for (int i=0;i<s.length();i++){
		if (isdigit(s[i])){
			sum++;
			continue;
		}
		cout<<s[i];
	}
	cout<<endl<<sum;
	return 0;
}

