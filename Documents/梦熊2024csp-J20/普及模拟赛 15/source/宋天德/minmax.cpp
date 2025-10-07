#include <bits/stdc++.h>
#define int long long
using namespace std;
int cnt[1000005];
signed main()
{
    freopen("minmax.in","r",stdin);
    freopen("minmax.out","w",stdout);
    ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=1,tmp;i<=n;i++)
	{
		cin>>tmp;
		cnt[tmp]++;
	}
	for(int i=1;i<=1000000;i++)
	{
		cnt[i]+=cnt[i-1];
	}
	int ans=0;
	for(int i=1;i<=1000000;i++)
	{
		int d=cnt[i]-cnt[i-1];
		for(int k=1;k*i<=1000000;k++)
		{
			int maxn=1000000;
			ans+=d*(cnt[min(maxn,(k+1)*i-1)]-cnt[k*i-1])*k;
		}
		ans-=d*(d+1)/2;
	}
	cout<<ans;
	return 0;
}