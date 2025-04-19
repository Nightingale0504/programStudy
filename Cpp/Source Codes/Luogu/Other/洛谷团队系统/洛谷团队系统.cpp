#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n;
	int localTime,luoguTime;
	scanf("%d",&n);
	localTime=5*n;
	luoguTime=11+3*n;
	if (localTime<luoguTime){
		printf("%s","Local");
	}else{
		printf("%s","Luogu");
	}
	return 0;
}

