#include<iostream>
#include<cstdio>
#include<algorithm>
#include<ctime>
#include<cstring>
using namespace std;
int n,m;
const int maxNum=1e3+5;
long long f[maxNum][maxNum];
int findans(int n,int m){
	if (n==0){
		f[n][m]=m;
		return m;
	}
	if (m==0){
		f[n][m]=n%3;
		return n%3;
	}
	f[n-1][m]=findans(n-1,m);
	f[n][m-1]=findans(n,m-1);
	f[n-1][m-1]=findans(n-1,m-1);
	return findans(n-1,m)-findans(n,m-1)+findans(n-1,m-1);
}
int main(){
//	#ifndef ONLINE_JUDGE
//		freopen("nightingale.in","r",stdin);
//		freopen("nightingale.out","w",stdout);
//	#endif
	memset(f,0,sizeof(f));
	int n,m;
	double st,et,ct,st2,et2,ct2;
	st2=time(0);
	scanf("%d%d",&n,&m);
	et2=time(0);
	ct2=et2-st2;
	st=time(0);
	findans(n+1,m+1);
	int k=findans(n,m);
	et=time(0);
	ct=et-st;
	printf("%s:%lf\n%s:%lf\n%s:%d\n%s:\n","The Enter Using Time",ct2,"The Calc Using Time",ct,"The Answer",k,"The List");
	for (int i=0;i<n+1;i++){
		for (int j=0;j<m+1;j++){
			printf("%d ",f[i][j]);
		}
		printf("\n");
	}
	return 0;
}

