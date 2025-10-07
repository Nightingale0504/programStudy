#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
map<int,int>buc,vis;
const int B=1e6;
const int V=1e9;
inline void solve(){
	cin>>n;
	buc.clear();
	vis.clear();
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		buc[a[i]]++;
	}
	long long res=0;
	for(int i=1;i<=n;i++){
		int x=a[i];
		if(!vis[x]){
			vis[x]=1;
			int cnt=buc[x];
			if(cnt>=3)res+=1ll*cnt*(cnt-1)*(cnt-2);
			if(a[i]<=B){
				for(int j=1;j*j<=x;j++){
					if(x%j==0){
						int tmp1=j,tmp2=x/j;
						long long nxt=1ll*x*x/tmp1;
						if(tmp1!=x&&nxt<=V&&buc.count(tmp1)&&buc.count(nxt))res+=1ll*cnt*buc[tmp1]*buc[nxt];
						if(tmp1!=tmp2&&tmp2!=x){
							nxt=1ll*x*x/tmp2;
							if(nxt<=V&&buc.count(tmp2)&&buc.count(nxt))res+=1ll*cnt*buc[tmp2]*buc[nxt];
						}
					}
				}
			}else{
				for(int j=2;x*j<=V;j++){
					if(x%j==0&&buc.count(x/j)&&buc.count(x*j))res+=1ll*cnt*buc[x/j]*buc[x*j];
				}
			}
		}
	}
	cout<<res<<endl;
}
signed main(){
	solve();
	return 0;
}
/*
*/
