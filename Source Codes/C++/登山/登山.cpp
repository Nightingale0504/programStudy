#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int elevation[n+1],max=-1,s=0;
	for (int i=0;i<n;i++){
		scanf("%d",&elevation[i]);
	}
	for (int i=0;i<n;i++){
		if (elevation[i]>max){
			max=elevation[i];
			s++;
		}
	}
	
	printf("%d",s);
	return 0;
}
