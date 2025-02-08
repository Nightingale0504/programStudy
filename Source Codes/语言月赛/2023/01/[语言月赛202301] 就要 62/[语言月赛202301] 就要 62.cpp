#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long x;
int flag;
int main(){
	scanf("%lld",&x);
	if (x%62==0){
		flag=1;
	}else while (x){
		if (x%100==62){
			flag=1;
			break;
		}
		x/=10;
	}
	if (flag){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}

