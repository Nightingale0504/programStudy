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
int main(){
	// part:define variable
	int pos;
	string a;
	string b,c;
	// part:enter a b and c
	cin>>a>>b>>c;
	// part:replace all b in a to d
	while (a.find(b)!=string::npos){
		pos=a.find(b);
		a.replace(pos,1,c);
	}
	cout<<a;
	return 0;
}

