#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n;
string s;
signed main(){
	cin>>n>>s;
	if (s=="AA"){
		printf("%lld",n);
	}else if (s=="AB" || s=="BA" || s=="BB"){
		printf("%lld",n*8/10);
	}else if (s=="AC" || s=="CA" || s=="CC"){
		printf("%lld",n*7/10);
	}else if (s=="CB" || s=="BC"){
		printf("%lld",n*6/10);
	}
	return 0;
}

