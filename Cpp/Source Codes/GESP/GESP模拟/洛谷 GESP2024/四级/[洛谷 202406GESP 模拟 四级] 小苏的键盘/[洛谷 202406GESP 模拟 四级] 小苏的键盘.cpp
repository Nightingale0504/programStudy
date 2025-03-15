#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n;
string ans,t;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		cin>>t;
		if (t!="<bs>"){
			ans+=t;
		}else{
			if (ans.size()!=0){
				ans.erase(ans.end()-1);
			}
		}
	}
	cout<<ans;
	return 0;
}

