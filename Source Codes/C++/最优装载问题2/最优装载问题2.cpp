#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
#define int long long
struct node{
	string name;
	double w;
}a[10005];
bool cmp(node x,node y){
	return x.w<y.w;
}
int n;
double c,sum;
signed main(){
	scanf("%lf%lld",&c,&n);
	for (int i=0;i<n;i++){
		cin>>a[i].name>>a[i].w;
	}
	sort(a,a+n,cmp);
	for (int i=0;i<n;i++){
		sum+=a[i].w;
		if (sum<=c){
			cout<<a[i].name<<" ";
		}else{
			exit(0);
		}
	}
	return 0;
}

