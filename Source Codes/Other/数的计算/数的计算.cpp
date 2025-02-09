#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int f[1010],n;
int main(){
	f[0]=f[1]=1;
	scanf("%d",&n);
	for (int i=2;i<=n;i++){
		if (i%2==0){
			f[i]=f[i-1]+f[i/2];
		}else{
			f[i]=f[i-1]; 
		}
	}
	printf("%d",f[n]);
	return 0;
}

