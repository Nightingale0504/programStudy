#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int k,target,num;
bool isHappy(int n){
	if (n==1 || n==7){
		return true;
	}else if (n<10){
		return false;
	}else{
		int num=0;
		while (n){
			num+=(n%10)*(n%10);
			n/=10;
		}
		return isHappy(num);
	}
} 
signed main(){
	scanf("%lld",&target);
	if (target==-1){
		for (int i=0;;i++){
			if (isHappy(i)){
				printf("%lld, ",i);
				k++;
			}
			if (k==10){
				k=0;
				printf("\n");
			}
		}
	}else{
		for (int i=0;i<=target;i++){
			if (isHappy(i)){
				printf("%lld, ",i);
				k++;
				num++;
			}
			if (k==10){
				k=0;
				printf("\n");
			}
		}
		printf("\n一共有 %lld 个快乐数",num);
	}
	return 0;
}

