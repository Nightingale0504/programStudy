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
#include<cctype>
using namespace std;
#define int long long
string s;
int sum;
signed main(){
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

