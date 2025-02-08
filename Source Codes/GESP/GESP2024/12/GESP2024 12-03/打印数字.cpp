#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
#define int long long
string c[4][5]={
	{".....",".***.",".***.",".***.","....."},
	{"****.","****.","****.","****.","****."},
	{".....","****.",".....",".****","....."},
	{".....","****.",".....","****.","....."}
};
string s,tmp;
int len,t;
signed main(){
	cin>>s;
	len=s.length();
	for (int i=0;i<5;i++){
		tmp="";
		for (int j=0;j<len;j++){
			t=s[j]-'0';
			tmp+=c[t][i];
		}
		cout<<tmp<<"\n";
	}
	return 0;
}

