#include<bits/stdc++.h> 
using namespace std;
int a[5],b[5],ans;
signed main(){
	for (int i=1;i<4;i++){
		cin>>a[i];
	}
	for (int i=1;i<4;i++){
		cin>>b[i];
	}
	sort(a+1,a+4);
	sort(b+1,b+4);
	for (int i=1;i<4;i++){
		ans+=abs(a[i]-b[i]);
	}
	cout<<ans<<"\n";
	return 0;
}

