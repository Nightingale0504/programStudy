#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<climits>
#include<cmath>
#include<map>
#include<stack>
#include<queue>
#include<climits>
#include<cmath>
#define int long long
using namespace std;
int f,m,n,ans; 
int t=5;
signed main(){
	scanf("%lld%lld%lld",&f,&m,&n);
	while (n--){
		if (t==7){
			t=1;
		}else{
			t++;
		}
		if (t==4 && n!=0){
			ans+=2*f+m;
		}
	}
	printf("%lld",ans);
	return 0;
}

