#include<bits/stdc++.h> 
using namespace std;
#define int long long
int a,b,c;
int ans;
signed main(){
	scanf("%lld%lld%lld",&a,&b,&c);
	switch (c){
		case 1:{
			ans=a+b;
			break;
		}
		case 2:{
			ans=a-b;
			break;
		}
		case 3:{
			ans=a*b;
			break;
		}
		case 4:{
			ans=a/b;
			break;
		}
	}
	printf("%lld",ans);
	return 0;
}

