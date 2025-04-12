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
const int maxS=1e6+5;
string s;
int ans,t,len;
bool judge(string s){
	int i=0,j=s.size()-1;
	while (i<=j){
		if (s[i++]!=s[j--]){
			return false;
		}
	}
	return true;
}
signed main(){
	cin>>s;
	len=s.size();
	for (int i=1;t+i<len;i++){
		if (judge(s.substr(t,i))){
			ans++;
		}
		t+=i;
	}
	if (judge(s.substr(t,len-t))){
		ans++;
	} 
	printf("%lld",ans);
	return 0;
}

