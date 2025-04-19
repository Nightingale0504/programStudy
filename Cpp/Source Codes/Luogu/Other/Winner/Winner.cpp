#include<bits/stdc++.h> 
using namespace std;
int main(){
	int k;
	scanf("%d",&k);
	if (k>2){
		printf("Survivor");
	}else if (k==2){
		printf("Tie");
	}else if (k<2){
		printf("Hunter");
	}
	return 0;
}

