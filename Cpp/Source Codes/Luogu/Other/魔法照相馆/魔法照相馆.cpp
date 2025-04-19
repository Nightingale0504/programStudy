#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,ans;
char t;
bool R=1,B=1,W=1;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		cin>>t;
		switch (t){
			case 'R':{
				if (R==0){
					R=1;
					ans++;
				}
				if (B==1){
					B=0;
					ans++;
				}
				if (W==1){
					W=0;
					ans++;
				}
				break;
			}
			case 'B':{
				if (B==0){
					B=1;
					ans++;
				}
				if (W==1){
					W=0;
					ans++;
				}
				break;
			}
			case 'W':{
				if (W==0){
					W=1;
					ans++;
				}
				break;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}

