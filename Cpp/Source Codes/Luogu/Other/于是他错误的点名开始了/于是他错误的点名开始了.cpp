#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=5e5+5;
int n,m,cnt,tree[maxN][26],num[maxN],sum;
string s;
map<string,int> mmap;
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
inline void method1(){
	//Trie method.
	scanf("%lld",&n);
	while (n--){
		cin>>s;
		insert(s);
	}
	scanf("%lld",&m);
	while (m--){
		cin>>s;
		sum=query(s);
		if (sum==0){
			printf("WRONG\n");
		}else if (sum==1){
			printf("OK\n");
			insert(s);
		}else if (sum>1){
			printf("REPEAT\n");
		}
	}
} 
inline void method2(){
	// Map method.
	scanf("%lld",&n);
	while (n--){
		cin>>s;
		mmap[s]=1;
	}
	scanf("%lld",&m);
	while (m--){
		cin>>s;
		sum=mmap[s];
		if (sum==0){
			printf("WRONG\n");
		}else if (sum==1){
			printf("OK\n");
			mmap[s]=2;
		}else if (sum==2){
			printf("REPEAT\n");
		}
	}
}
signed main(){
	method2();
	return 0;
}

