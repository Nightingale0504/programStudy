#include<bits/stdc++.h> 
using namespace std;
#define int long long
stack<char>s;
int num;
string p;
char trans(char a){
	switch (a){
		case ')':{
			return '(';
			break;
		}
		case ']':{
			return '[';
			break;
		}
		case '}':{
			return '{';
			break;
		}
		default:{
			return '\0';
			break;
		}
	}
}
signed main(){
	scanf("%lld\n",&num);
	while (num--){
		while (!s.empty()){
			s.pop();
		}
		getline(cin,p);
		for (int i=0;i<p.size();i++){
			if (s.empty()){
				s.push(p[i]);
				continue;
			}
			if (trans(p[i])==s.top()){
				s.pop();
			}else{
				s.push(p[i]);
			}
		}
		s.empty() ? printf("Yes\n") : printf("No\n");
	}
	return 0;
}

