#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
const int maxN=1e3+5;
int n,m,q,h[maxN],l[maxN],opt,x,y;
char a[maxN][maxN];
signed main(){
	cin>>n>>m>>q;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for (int i=1;i<=n;i++){
		h[i]=i;
	}
	for (int i=1;i<=m;i++){
		l[i]=i;
	}
	while (q--){
		cin>>opt>>x>>y;
		if (opt==1){
		   swap(h[x],h[y]);
		}
		if (opt==2){
			swap(l[x],l[y]);
		}
		if (opt==3){
			cout<<a[h[x]][l[y]]<<"\n";
		}
	}
	for (int i=1;i<=n;i++){
		for (int j=1;j<=m;j++){
			cout<<a[h[i]][l[j]];
		}
		cout<<"\n";
	}
	return 0;
}

