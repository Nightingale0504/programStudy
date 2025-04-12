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
const int maxN=1e6+5;
string s;
int tree[maxN][26],cnt,num[maxN];
inline void insert(string s){
	int p=0;
	for (int i=0;i<s.length();i++){
		int u=s[i]-'A';
		if (tree[p][u]==0){
			tree[p][u]=++cnt;
		}
		p=tree[p][u];
		num[p]++;
	}
}
signed main(){
	while (cin>>s){
		insert(s);
	}
	cnt++;
	printf("%lld",cnt);
	return 0;
}

