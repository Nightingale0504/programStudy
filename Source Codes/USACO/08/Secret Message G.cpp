#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=5e5+5;
int n,m,t,tree[maxN][5],num[maxN]; 
inline void insert(string s){
	int p=0;
	for (int i=0;i<s.length();i++){
		int u=s[i]-'a';
		if (tree[p][u]==0){
			tree[p][u]=++cnt;
		}
		p=tree[p][u];
	}
	num[p]++;
}
inline int query(string s){
	int p=0;
	for (int i=0;i<s.length();i++){
		int u=s[i]-'a';
		if (tree[p][u]==0){
			return 0;
		}else{
			p=tree[p][u];
		}
	}
	return num[p];
}
signed main(){
	scanf("%lld%lld",&m,&n);
	 for (int i=1;i<=m;i++){
	 	scanf("%lld",&t);
	 }
	return 0;
}

