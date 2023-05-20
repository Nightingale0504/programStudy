#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	char c;
	int s=0;
	while (cin>>c){
		s++;
	}
	printf("%d",s);
	return 0;
}


