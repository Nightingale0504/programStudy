#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int inf=INT_MAX;
struct data{
	int x,y;
	long long t1,t2;
}d[100002];
bool cmp(data a,data b){
	return a.t1<b.t1;
} 
int main(){
	int x[2],y[2],n;
	for (int i=0;i<2;i++){
		cin>>x[i]>>y[i];
	} 
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>d[i].x>>d[i].y;
		d[i].t1=(long long)(x[0]-d[i].x)*(x[0]-d[i].x)+(long long)(y[0]-d[i].y)*(y[0]-d[i].y);
		d[i].t2=(long long)(x[1]-d[i].x)*(x[1]-d[i].x)+(long long)(y[1]-d[i].y)*(y[1]-d[i].y);
	}
	sort(d+1,d+n+1,cmp);
	long long r2=0,ans=inf;
	for (int i=n;i>0;i--){
		r2=max(d[i+1].t2,r2);
		ans=min(ans,r2+d[i].t1);
	}
	cout<<ans;
	return 0;
}


