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
const int maxS=3e6+5;
int t,n,q,u,cnt;
int tree[maxS][65],num[maxS];
string s;
inline void insert(string s){
	int p=0;
	for (int i=0;i<s.length();i++){
		if (s[i]>='A' && s[i]<='Z'){
			u=s[i]-'A';
		}else if (s[i]>='a' && s[i]<='z'){
			u=s[i]-'a'+26;
		}else if (s[i]>='0' && s[i]<='9'){
			u=s[i]-'0'+52;
		}
		if (tree[p][u]==0){
			tree[p][u]=++cnt;
		}
		p=tree[p][u];
		num[p]++;
	}
}
inline int query(string s){
	int p=0;
	for (int i=0;i<s.length();i++){
		if (s[i]>='A' && s[i]<='Z'){
			u=s[i]-'A';
		}else if (s[i]>='a' && s[i]<='z'){
			u=s[i]-'a'+26;
		}else if (s[i]>='0' && s[i]<='9'){
			u=s[i]-'0'+52;
		}
		if (tree[p][u]==0){
			return 0;
		}else{
			p=tree[p][u];
		}
	}
	return num[p];
}
signed main(){
	cin>>t;
	while (t--){
		cin>>n>>q;
		cnt=0;
		while (n--){
			cin>>s;
			insert(s);
		}
		while (q--){
			cin>>s;
			cout<<query(s)<<"\n";
		}
		for (int i=0;i<=cnt;i++){
			num[i]=0;
		}
		for (int i=0;i<=cnt;i++){
			for (int j=0;j<=62;j++){
				tree[i][j]=0;
			}
		}
	}
	return 0;
}

