#include<bits/stdc++.h>
#define ll long long
#define db double
#define mp make_pair
#define fi first
#define se second
#define pii pair<int,int>
using namespace std;
int read(){
	int sum=0,f=1;char st=getchar();
	while(st<'0'||st>'9'){
		if(st=='-')f=-1;
		st=getchar();
	}
	while('0'<=st&&st<='9'){
		sum=(sum<<3)+(sum<<1)+st-'0';
		st=getchar();
	}
	return sum*f;
}
const int maxn=4010;
vector<int> a[maxn];
int n,m,v[maxn],d[maxn][maxn];
queue<int>p;
pii ma[maxn][3];
int main(){
	freopen("tour.in","r",stdin);
	freopen("tour.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=m;++i){
		int x=read(),y=read();
		a[x].push_back(y),a[y].push_back(x);
	}
	for(int i=1;i<=n;++i){
		int S=i;
		d[i][i]=1,p.push(S);
		while(p.size()){
			int x=p.front();p.pop();
			for(int y:a[x]){
				if(!d[i][y])d[i][y]=d[i][x]+1,p.push(y);
			}
		}
		for(int j=1;j<=n;++j)
			if(d[i][j]>=ma[i][0].fi)ma[i][2]=ma[i][1],ma[i][1]=ma[i][0],ma[i][0]=mp(d[i][j],j);
			else if(d[i][j]>=ma[i][1].fi)ma[i][2]=ma[i][1],ma[i][1]=mp(d[i][j],j);
			else ma[i][2]=max(ma[i][2],mp(d[i][j],j));
		// cout<<"i="<<i<<" ma[i][0].fi="<<ma[i][0].fi<<" ma[i][1].fi="<<ma[i][1].fi<<" ma[i][2].fi="<<ma[i][2].fi<<endl;
	}
	int ans=0;
	for(int i=1;i<=n;++i)
		for(int j=i+1;j<=n;++j){
			int st=0;
			v[i]=1,v[j]=1;
			for(int k=0;k<3;++k)
				if(!v[ma[i][k].se]){st=k;break;}
			v[ma[i][st].se]=1;
			for(int k=0;k<3;++k)
				if(!v[ma[j][k].se]){
					ans=max(ans,d[i][j]+ma[i][st].fi+ma[j][k].fi);
					break;
				}
			v[ma[i][st].se]=0;
			
			for(int k=0;k<3;++k)
				if(!v[ma[j][k].se]){st=k;break;}
			v[ma[j][st].se]=1;
			for(int k=0;k<3;++k)
				if(!v[ma[i][k].se]){
					ans=max(ans,d[i][j]+ma[j][st].fi+ma[i][k].fi);
					break;
				}
			v[ma[j][st].se]=0;

			v[i]=v[j]=0;
		}	
	cout<<ans-3<<endl;
	return 0;
}
