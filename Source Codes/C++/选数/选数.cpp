#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxN 1e8+10
typedef long long ll;
ll n=0,k=0;
ll arr[100];
bool isPrime(ll n){
	if (n<2){
		return false;
	}
	for (ll i=2;i*i<=n;i++){
		if (n%i==0){
			return false;
		}
	}
	return true;
}
int cnt=0;
void dfs(ll dp,ll num,ll sum){
	if (dp>n || num>k){
		return;
	}
	if (num==k){
		if (isPrime(sum)){
			cnt++;
		}
		return;
	}
	dfs(dp+1,num+1,sum+arr[dp]);
	dfs(dp+1,num,sum);
}
int main(){
	scanf("%d%d",&n,&k);
	for (ll i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	dfs(0,0,0);
	printf("%d\n",cnt);
	return 0;
}

