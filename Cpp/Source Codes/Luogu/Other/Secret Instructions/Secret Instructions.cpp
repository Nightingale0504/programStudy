#include<bits/stdc++.h> 
using namespace std;
#define int long long
string s,ans;
signed main(){
	while (cin>>s){
		if (s=="99999"){
			break;
		}
		int t=s[0]-'0'+s[1]-'0';
		if (t%2==0 && t!=0){
			ans="right";
		}
		if (t%2==1 && t!=0){
			ans="left";
		}
		cout<<ans<<" "<<s.substr(2)<<endl;
	}
	return 0;
}

