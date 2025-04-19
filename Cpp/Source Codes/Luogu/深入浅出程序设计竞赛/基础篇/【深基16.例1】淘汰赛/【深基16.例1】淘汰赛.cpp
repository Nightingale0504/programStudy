#include<bits/stdc++.h> 
using namespace std;
#define int long long
int value[260],winner[260];
int n;
void dfs(int x){
	if (x>=1<<n){
		return;
	}else{
		dfs(2*x);
		dfs(2*x+1);
		int lvalue=value[2*x],rvalue=value[2*x+1];
		if (lvalue>rvalue){
			value[x]=lvalue;
			winner[x]=winner[2*x];
		}else{
			value[x]=rvalue;
			winner[x]=winner[2*x+1];
		}
	}
}
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<1<<n;i++){
		scanf("%lld",&value[i+(1<<n)]);
		winner[i+(1<<n)]=i+1;
	}
	dfs(1);
	printf("%lld",value[2]>value[3] ? winner[3] : winner[2]);
	return 0;
}

