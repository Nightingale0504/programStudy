#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("spire2.in","w",stdout);
	int T=5;
	cout<<T<<endl;
	while(T--){
		int n=100000,m=100000,k=1000;
		cout<<n<<" "<<m<<" "<<k<<endl;
		for(int i=1;i<=n;i++) cout<<rand()%5+1<<" "; cout<<endl;
	}
}
