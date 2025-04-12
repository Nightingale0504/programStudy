#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<climits>
#include<cmath>
using namespace std;
#define int long long
string s,s2;
int a;
signed main(){
	s.resize(100);
	scanf("%s",&s[0]);
	for (int i=0;i<s.length();i++){
		a=s[i]-'0';
		printf("%lld ",a);
	}
	printf("\n%s",s.c_str());
	cin>>s2;
	for (int i=0;i<s2.length();i++){
		a=s2[i]-'0';
		printf("%lld ",a);
	}
	printf("\n%s",s2.c_str());
	return 0;
}

