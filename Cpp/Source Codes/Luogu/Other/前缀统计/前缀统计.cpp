#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e6+5;
int n,m,cnt,tree[maxN][26],num[maxN],sum;
string s;
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
	int p=0,ans=0;
	for (int i=0;i<s.length();i++){
		int u=s[i]-'a';
		if (tree[p][u]==0){
			break;
		}else{
			p=tree[p][u];
			ans+=num[p];
		}
	}
	return ans;
}
signed main(){
	scanf("%lld%lld",&n,&m);
	while (n--){
		cin>>s;
		insert(s);
	}
	while (m--){
		cin>>s;
		printf("%lld\n",query(s));
	}
	return 0;
}

