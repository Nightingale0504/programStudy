#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
#define int long long
int a,b;
string s1,s2;
char dot;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
 	cin>>a>>dot>>s1>>b>>dot>>s2;
	s1==s2 ? printf("YES") : printf("NO");
	return 0;
}

