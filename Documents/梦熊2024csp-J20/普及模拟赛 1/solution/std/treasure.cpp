#include<bits/stdc++.h> 
using namespace std;
#define N 2050
int s[N][N],f[N][N],n;
char a[N][N],ans[N<<1];
void init(){
	cin>>n;int k;cin>>k;
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin>>a[i][j];
	for(int i=1;i<=n;i++)for(int j=1;j<=n;j++){
		s[i][j]=0x3f3f3f3f;
		if(i==1&&j==1){
			s[i][j]=(a[1][1]!='a');
			if(s[i][j]<=k)a[i][j]='a'; continue; 
		} 
		if(i>1)s[i][j]=min(s[i][j],s[i-1][j]);
		if(j>1)s[i][j]=min(s[i][j],s[i][j-1]);
		s[i][j]+=(a[i][j]!='a');
		if(s[i][j]<=k)a[i][j]='a'; 
	} 
	f[1][1]=1;ans[2]=a[1][1];
	for(int k=3;k<=(n<<1);k++){
		char x='z';
		for(int i=1;i<k;++i){
			if(k-i>n)continue;
			if(i>n)continue;
			if(f[i-1][k-i]|f[i][k-i-1])x=min(x,a[i][k-i]);
		}
		for(int i=1;i<k;++i){
			if(k-i>n)continue;
			if(i>n)continue;
			if(a[i][k-i]==x)f[i][k-i]=(f[i-1][k-i]|f[i][k-i-1]);
		}
		ans[k]=x;
	}
	for(int i=2;i<=(n<<1);i++)cout<<ans[i];
	cout<<"\n";
}
int main(){
	 freopen("treasure.in","r",stdin);
	 freopen("treasure.out","w",stdout);
	init();
}
/*
*/
