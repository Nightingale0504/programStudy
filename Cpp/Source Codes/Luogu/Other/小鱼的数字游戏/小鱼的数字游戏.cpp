#include<bits/stdc++.h> 
using namespace std;
int main(){
	int i,a[110];
	do {
		scanf("%d",&a[++i]);
	} while(a[i]!=0);
	for (int j=i-1;j>=1;j--){
		printf("%d ",a[j]);
	}
	return 0;
}

