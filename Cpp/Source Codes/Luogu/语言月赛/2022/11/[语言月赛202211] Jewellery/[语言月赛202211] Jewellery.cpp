#include<bits/stdc++.h> 
#include<map>
using namespace std;
#define int long long
int qua[6]={0,2000,1000,200,36,6};
int n,k,ans,opt;
string name;
map<string,int> m1;
map<string,int> m2;
signed main(){
	scanf("%lld%lld",&n,&k);
	while (n--){
		cin>>name>>opt;
		m1[name]=qua[opt];
	}
	while (k--){
		cin>>name;
		m2[name]++;
		if (m2[name]>=2){
			ans+=m1[name];
		}
	}
	printf("%lld",ans);
	return 0;
}

