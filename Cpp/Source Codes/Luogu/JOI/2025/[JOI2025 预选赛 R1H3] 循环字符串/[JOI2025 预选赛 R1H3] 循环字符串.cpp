#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m;
string s,t,tmp;
signed main(){
	scanf("%lld",&n);
	cin>>s;
	for (int len=1;len<=n/2;len++){
		t=s.substr(0,len);
		if (n%len!=0){
			continue;
		}
		m=n/len;
		tmp="";
		while (m--){
			tmp+=t;
		}
		if (tmp==s){
			printf("Yes");
			return 0;
		}
	} 
	printf("No");
	return 0;
}

