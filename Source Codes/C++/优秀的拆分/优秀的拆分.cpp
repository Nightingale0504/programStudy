#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
const int maxn=100005;
int n;
long long now=1;
bool a[105];
int main(){
	scanf("%d",&n);
	if (n%2!=0)
	{
		printf("-1");
		return 0;
	}
	int i=0;
	while(now*2<=n)
	{
		now*=2;
		i++;
	}
	int i1=i;
	while(now>1)
	{
		if (n-now>=0)
		{
			a[i1]=1;
			n-=now;
		}
		i1--;
		now/=2;
	}
	for (register int j=i;j>=1;--j)
	{
		if (a[j]==0) continue;
		long long ans=pow(2,j);
		printf("%lld ",ans);
	}
	return 0;
}

