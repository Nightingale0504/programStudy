#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<climits>
#define int long long
using namespace std;
string s,se;
int start; 
inline int strToInt(string str){
	int num=0;
	for (int i=0;i<str.size();i++){
		num=num*10+(str[i]-'0');
	}
	return num;
}
inline void process(string str){
	int sum=0,cnt=0;
	string num,res;
	for (int i=0;i<str.size();i++){
		if (isdigit(str[i])){
			num+=str[i];
		}else{
			if (!num.empty()){
				sum+=strToInt(num);
				cnt++;
				num="";
			}
		}
	}
	if (!num.empty()){
		sum+=strToInt(num);
		cnt++;
	}
	res=(sum%2==0) ? "Even" : "Odd";
	cout<<cnt<<" "<<res<<"\n";
}
signed main(){
	cin>>s;
	for (int i=0;i<s.size();i++){
		if (s[i]=='.' || s[i]=='?' || s[i]=='!'){
			se=s.substr(start,i-start+1);
			process(se);
			start=i+1;
		}
	}
	return 0;
}

