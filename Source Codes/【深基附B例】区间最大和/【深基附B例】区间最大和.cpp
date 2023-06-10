#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int a[8000010],s[8000010];
int n,M,ansi,ansj,ansmax;
int sum,l,r,mid,i,j,x;
int find(int k){
	l=1;
	r=n+1;
	while (l<r){
		int mid=l+(r-1)/2;
		if (s[mid]>=k){
			r=mid;
		}else{
			l=mid+1;
		}
	}
	if (a[l]==k){
		return 1;
	}else{
		return l-1;
	}
}
void solve(int id){
	switch (id){
		case 1:{
			scanf("%lld%lld",&n,&M);
			for (int i=1;i<=n;i++){
				scanf("%lld",&a[i]);
			}
			for (int i=1;i<=n;i++){
				for (int j=i;j<=n;j++){
					sum=0;
					for (int k=i;k<=j;k++){
						sum+=a[k];
					}
					if (sum<=M && sum>ansmax){
						ansmax=sum;
						ansi=i;
						ansj=j;
					}
				}
			}
			printf("%lld %lld %lld\n",ansi,ansj,ansmax);
			break;
		}
		case 2:{
			scanf("%lld%lld",&n,&M);
			for (int i=1;i<=n;i++){
				scanf("%lld",&a[i]);
			}
			s[0]=0;
			for (int i=1;i<=n;i++){
				s[i]=s[i-1]+a[i];
			}
			for (int i=1;i<=n;i++){
				for (int j=i;j<=n;j++){
					sum=s[j]-s[i-1];
					if (sum<=M && sum>ansmax){
						ansmax=sum;
						ansi=i;
						ansj=j;
					}
				}
			}
			printf("%lld %lld %lld\n",ansi,ansj,ansmax);
			break;
		}
		case 3:{
			scanf("%lld%lld",&n,&M);
			for (int i=1;i<=n;i++){
				scanf("%lld",&a[i]);
			}
			s[0]=0;
			for (int i=1;i<=n;i++){
				s[i]=s[i-1]+a[i];
			}
			for (int i=1;i<=n;i++){
				x=s[i-1]+M;
				j=find(x);
				sum=s[j]-s[i-1];
				if (sum<=M && sum>ansmax){
					ansmax=sum;
					ansi=i;
					ansj=j;
				}
			}
			printf("%lld %lld %lld\n",ansi,ansj,ansmax);
			break;
		}
		case 4:{
			i=1;
			j=1;
			scanf("%lld%lld",&n,&M);
			for (int i=1;i<=n;i++){
				scanf("%lld",&a[i]);
			}
			while (i<=n){
				while (j<=n && sum+a[j]<=M){
					sum+=a[j];
					j++;
				}
				if (sum<=M && sum>ansmax){
					ansmax=sum;
					ansi=i;
					ansj=j-1;
				}
				sum-=a[i];
				i++;
			}
			printf("%lld %lld %lld\n",ansi,ansj,ansmax);
			break;
		}
	}
}
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	solve(4);
	return 0;
}

