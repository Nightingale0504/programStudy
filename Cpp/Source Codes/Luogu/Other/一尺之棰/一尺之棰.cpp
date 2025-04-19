#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,days=1;
	scanf("%d",&a);
	while (a>1){
		days++;
		a/=2;
	}
	printf("%d",days);
	return 0;
}

