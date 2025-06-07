#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m;
double l,a[100005][25];
struct node{
	string s;
	double sum;
}ss[100005];
inline bool cmp(node a,node b){
	if(a.sum==b.sum){
		return a.s<b.s;
	}
	return a.sum>b.sum;
}
signed main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		l=0;
		cin>>ss[i].s;
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			l+=a[i][j];
		}
		l=l/m;
		for(int j=1;j<=m;j++){
			ss[i].sum=ss[i].sum+(a[i][j]-l)*(a[i][j]-l);
		}
		ss[i].sum=sqrt(ss[i].sum)/m;
	}
	sort(ss+1,ss+n+1,cmp);
	if(n>20){
		for(int i=1;i<=20;i++){
			cout<<ss[i].s<<"\n";
		}
	}else{
		for(int i=1;i<=n;i++){
			cout<<ss[i].s<<"\n";
		}
	}
	return 0;
}

