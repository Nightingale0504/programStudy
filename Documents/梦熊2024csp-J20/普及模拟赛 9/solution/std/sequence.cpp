#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[1000009];
map<int,bool> p;
int n;
int ck(int x){
	int z;
	z=1;
	int s;
	s=0;
	for(int i=1;i<=n;i++){
		if(x%a[i]==0){
			int g;
			g=__gcd(a[i],z);
			z*=a[i];
			z/=g;
			s++;
		}
	}
	if(z==x){
		return s;
	}
	return 0;
}
void _main(){
	cin>>n;
	p.clear();
	for(int i=1;i<=n;i++){
		cin>>a[i];
		p[a[i]]=1;
	}
	int z;
	z=1;
	for(int i=1;i<=n;i++){
		int g;
		g=__gcd(a[i],z);
		z*=a[i];
		z/=g;
		if(z>1e9){
			cout<<n<<endl;
			return;
		}
	}
	if(!p[z]){
		cout<<n<<endl;
		return;
	}
	int ans;
	ans=0;
	for(int i=1;i<=sqrt(z);i++){
		if(z%i==0){
			if(!p[i]){
			ans=max(ans,ck(i));
		}
		if(!p[z/i]){
			ans=max(ans,ck(z/i));
		}
		}
		
	}
	cout<<ans<<endl;
}
signed main(){
	std::ios::sync_with_stdio(0);
	_main();
	return 0;
}
