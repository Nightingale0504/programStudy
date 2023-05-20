#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
struct volunteer{
	int registrationNumber;
	int writtenTestResult;
};
bool cmp(volunteer a,volunteer b){
	if (a.writtenTestResult!=b.writtenTestResult){
		return a.writtenTestResult>b.writtenTestResult;
	}else{
		return a.registrationNumber<b.registrationNumber;
	}
}
int main(){
	int n,m,x=0;
	scanf("%d%d",&n,&m);
	int tmp=floor(m*1.5)-1;
	volunteer vol[n+1];
	for (int i=0;i<n;i++){
		scanf("%d",&vol[i].registrationNumber);
		scanf("%d",&vol[i].writtenTestResult);
	}
	sort(vol,vol+n,cmp);
	int isl=vol[tmp].writtenTestResult;
	for (int i=0;i<n;i++){
		if (vol[i].writtenTestResult>=isl){
			x++;
		}
	}
	printf("%d %d\n",isl,x);
	for (int i=0;i<n;i++){
		if (vol[i].writtenTestResult>=isl){
			printf("%d %d\n",vol[i].registrationNumber,vol[i].writtenTestResult);
		}
	}
	return 0;
}


