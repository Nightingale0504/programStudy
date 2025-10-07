      
#include<bits/stdc++.h>
using namespace std;
#define LL long long
#define pp pair<int,int>
#define mp make_pair 
#define ull unsigned long long
int T,n,a[2000005]; 
inline void solve(){
	cin>>n;
	int s=0;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]),s+=(a[i]==0);
	if((n%2==0&&s<=n/2)||((n%2)&&s<=(n+1)/2)) cout<<0<<endl;
	else{
		if(s==n) cout<<1<<endl;
		else{
			for(int i=1;i<=n;i++){
				if(a[i]>1){
					cout<<1<<endl;
					return ;
				}
			}
			cout<<2<<endl;
		}
	}
}
signed main(){
	freopen("arrange.in","r",stdin);
	freopen("arrange.out","w",stdout);
	solve(); 
	return 0;
}
/*
*/

    
