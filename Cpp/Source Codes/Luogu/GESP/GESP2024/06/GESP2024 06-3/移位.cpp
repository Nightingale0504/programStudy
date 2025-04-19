#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n;
char charSet[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'},ans[26];
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<26;i++){
		ans[i]=(charSet[i]-'A'+n)%26+'A';
	}
	printf("%s",ans);
	return 0;
}

