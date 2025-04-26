#include<bits/stdc++.h> 
using namespace std;
#define int long long
map<string,int> m;
int n,sum=52;
string s;
signed main(){
	scanf("%lld",&n);
	while (n--){
		cin>>s;
		if (m[s]==0){
			sum--;
			m[s]=1;
		}
	}
	printf("%lld",sum);
	return 0;
}

