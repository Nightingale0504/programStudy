#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
#define int long long
struct antique{
	string name;
	double w;
}aq[10005];
bool cmp(antique a,antique b){
	return a.w<b.w;
}
int n;
double c,sum;
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lf%lld",&c,&n);
	for (int i=0;i<n;i++){
		cin>>aq[i].name>>aq[i].w;
	}
	sort(aq,aq+n,cmp);
	for (int i=0;i<n;i++){
		sum+=aq[i].w;
		if (sum<=c){
			cout<<aq[i].name<<" ";
		}else{
			exit(0);
		}
	}
	return 0;
}

