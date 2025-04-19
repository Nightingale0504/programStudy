#include<bits/stdc++.h> 
using namespace std;
const int maxN=2*1e3+10;
int a[maxN],b[135],k,ans,n,Max=-1;
int main(){
	scanf("%d%d",&n,&k);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		b[a[i]]++;
		Max=max(Max,a[i]);
	} 
	for (int i=Max;i>=1;i--){
		ans+=b[i];
		if (ans>=k){
			break;
		}
	} 
	printf("%d\n",ans);
}
