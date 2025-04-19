#include<bits/stdc++.h> 
using namespace std;
int main(){
	int x;
	scanf("%d",&x);
	printf("%s%d%s","Today, I ate ",x," apple");
	if (x!=0 && x!=1){
		printf("%c",'s');
	}
	printf("%c",'.');
	return 0;
}

