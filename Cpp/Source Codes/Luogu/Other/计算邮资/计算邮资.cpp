#include<bits/stdc++.h> 
using namespace std;
#define int long long
double n,ans=8;
char u;
signed main(){
	scanf("%lf %c",&n,&u);
	if (u=='y'){
		ans+=5;
	}
	if (n>1000){
		ans+=ceil((n-1000)/500)*4;
	}

	printf("%.0lf",ans);
	return 0;
}

