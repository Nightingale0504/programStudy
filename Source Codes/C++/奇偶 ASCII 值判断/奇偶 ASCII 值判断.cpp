#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
char n;
signed main(){
	scanf("%c",&n);
	if ((int)n&1){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}

