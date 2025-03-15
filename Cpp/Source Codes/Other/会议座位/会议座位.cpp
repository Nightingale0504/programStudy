#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
using namespace std;
#define int long long
const int maxN=1e5+5;
int n,ans,a[maxN],b[maxN];
string s;
map<string,int> mmap;
inline void sst(int L,int R){
	if (L==R){
		return;
	}
	int mid=(L+R)>>1;
	sst(L,mid);
	sst(mid+1,R);
	int left=L,right=mid+1,k=L;
	while (left<=mid && right<=R){
		if (a[left]>a[right]){
			ans+=mid-left+1;
			b[k++]=a[right++];
		}else{
			b[k++]=a[left++];
		}
	}
	while (left<=mid){
		b[k++]=a[left++];
	}
	while (right<=R){
		b[k++]=a[right++];
	}
	for (int i=L;i<=R;i++){
		a[i]=b[i];
	}
}
signed main(){
	scanf("%lld",&n);
	for (int i=1;i<=n;i++){
		cin>>s;
		mmap[s]=i;
	}
	for (int i=1;i<=n;i++){
		cin>>s;
		a[i]=mmap[s];
	}
	sst(1,n);
	printf("%lld",ans);
	return 0;
}

