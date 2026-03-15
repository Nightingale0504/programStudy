#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n;
string a,b,mmax;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		cin>>a;
		b=a;
		reverse(a.begin(),a.end());
		if (a==b){
			if (mmax.size()<b.size()){
				mmax=b;
			}else if (mmax.size()==b.size()){
				mmax=max(mmax,b);
			}
		}else{
			continue;
		}
	}
	cout<<mmax;
	return 0;
}

