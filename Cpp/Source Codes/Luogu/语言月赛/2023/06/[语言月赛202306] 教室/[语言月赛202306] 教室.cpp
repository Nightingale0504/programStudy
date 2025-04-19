#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,m,student,sq,desk,row;
int a[105],b[105],c[105];
signed main(){
	scanf("%lld%lld",&n,&m);
	for (int i=0;i<n;i++){
		scanf("%lld%lld%lld",&a[i],&b[i],&c[i]);
		student+=a[i]*b[i]*c[i];
	}
	if (student%m!=0){
		row=student/m+1;
	}else{
		row=student/m;
	}
	if (student%m==0){
		desk=m;
	}else{
		desk=student%m;
	}
	printf("%lld %lld",row,desk);
	return 0;
}

