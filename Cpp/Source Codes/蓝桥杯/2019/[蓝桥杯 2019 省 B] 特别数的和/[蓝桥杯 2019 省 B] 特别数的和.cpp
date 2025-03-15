#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,ans;
bool check(int x){
	while (x!=0){
		int t=x%10;
		if (t==2 || t==0 || t==1 || t==9){
			return true;
		}
		x/=10;
	}
	return false;
}
int main(){
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		if (check(i)){
			ans+=i;
		}
	}
	printf("%d",ans);
	return 0;
}

