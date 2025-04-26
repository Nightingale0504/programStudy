#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,k;
map<string,string> f;
string t1,t2,name;
inline string find(string name){
	return f[name]==name ? name : f[name]=find(f[name]);
}
inline void merge(string x,string y){
	f[find(y)]=find(x);
}
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++){
		cin>>name;
		f[name]=name;
	}
	while (m--){
		cin>>t1>>t2;
		merge(t1,t2);
	}
	scanf("%lld",&k);
	while (k--){
		cin>>t1>>t2;
		find(t1)==find(t2) ? printf("Yes.\n") : printf("No.\n");
	}
	return 0;
}

