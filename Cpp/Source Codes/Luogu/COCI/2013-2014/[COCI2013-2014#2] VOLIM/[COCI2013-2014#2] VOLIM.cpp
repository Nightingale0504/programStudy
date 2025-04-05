#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int k,n,t,x;
char c;
int main(){
	scanf("%d%d",&k,&n);
	for (int i=0;i<n;i++){
		scanf("%d",&x);
		cin>>c;
		t+=x;
		if (t>=210){
			printf("%d",k);
			return 0;
		}else{
			if (c=='T'){
				if (k==8){
					k=1;
				}else{
					k++;
				}
			}
		}
	}
	return 0;
}

