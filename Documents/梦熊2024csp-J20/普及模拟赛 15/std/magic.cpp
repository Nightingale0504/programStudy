#include<bits/stdc++.h>
using namespace std;
int main(){
	long long f[4];
	cin>>f[1]>>f[2]>>f[3]; sort(f+1,f+4);
	if(f[2]==f[3]){
		cout<<"YES\n";
		cout<<1<<" "<<f[1]<<" "<<f[2]<<endl;
	}
	else{
		cout<<"NO\n";
	}
	
}
