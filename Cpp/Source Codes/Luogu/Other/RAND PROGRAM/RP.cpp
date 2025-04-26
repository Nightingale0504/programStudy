#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n,ans=0;
	scanf("%d",&n);
	srand(time(0));
	ans=rand()%n;
	printf("%d",ans);
	return 0;
}

