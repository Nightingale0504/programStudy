#include<bits/stdc++.h> 
using namespace std;
const int maxN=1e4+5;
int n,k;
double t;
int l[maxN];
signed main(){
	scanf("%d%d",&n,&k);
	for (int i=0;i<n;i++){
		scanf("%lf",&t);
		l[i]=int(t*100.0);
	}
	int left=1,right=1e7,ans=0;
	while (left<=right){
		int mid=((left+right)>>1),total=0;
		for (int i=0;i<n;i++){
			total+=l[i]/mid;
		}
		if (total>=k){
			ans=mid;
			left=mid+1;
		}else if (total<k){
			right=mid-1;
		}
	}
	printf("%.2lf",(double)ans/100.0);
	return 0;
}
