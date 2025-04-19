#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=105;
int n,k,x[maxN],cnt;
signed main(){
	while (true){
		cnt=0;
		cin>>n>>k;
		if (n==0 && k==0){
			return 0;
		}
		for (int i=1;i<=n;i++){
			cin>>x[i];
		}
		sort(x+1,x+n+1);
		for (int i=1;i<=k;i++){
			cnt+=x[i];
		}
		cout<<cnt<<"\n";
	}
	return 0;
}

