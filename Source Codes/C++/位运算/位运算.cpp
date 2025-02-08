#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	printf("%d\n",n>>m);
	printf("%d\n",n<<m);
	return 0;
}

