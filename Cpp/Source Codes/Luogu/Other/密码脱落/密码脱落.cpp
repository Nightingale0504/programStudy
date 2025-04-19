#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,f[1005][1005],ans;
string s1,s2;
int LCS(string s1,string s2){
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			if (s1[i-1]==s2[j-1]){
				f[i][j]=f[i-1][j-1]+1;
			}else{
				f[i][j]=max(f[i-1][j],f[i][j-1]);
			}
		}
	}
	return f[n][n];
}
signed main(){
	while (cin>>s1){
		n=s1.length();
		s2=s1;
		for (int i=0;i<n;i++){
			s2[n-i-1]=s1[i];
		}
		ans=n-LCS(s1,s2);
		printf("%lld\n",ans);
	}
	return 0;
}

