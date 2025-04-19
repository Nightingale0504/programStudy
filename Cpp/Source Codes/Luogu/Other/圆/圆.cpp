#include<bits/stdc++.h> 
using namespace std;
#define int long long
int sq(int x){
	return pow(x,2);
}
double dist(int x1,int y1,int x2,int y2){
	return sqrt(sq(x1-x2)+sq(y1-y2));
}
int x[60],y[60],r[60];
signed main(){
	int n,x1,x2,y1,y2,ans=0;
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lld",&x[i]);
	}
	for (int i=0;i<n;i++){
		scanf("%lld",&y[i]);
	}
	for (int i=0;i<n;i++){
		scanf("%lld",&r[i]);
	}
	scanf("%lld%lld%lld%lld",&x1,&y1,&x2,&y2);
	for (int i=0;i<n;i++){
		if ((dist(x1,y1,x[i],y[i])<r[i])^(dist(x2,y2,x[i],y[i])<r[i])){
			ans++;
		}
	}
	printf("%lld",ans);
	return 0;
}

