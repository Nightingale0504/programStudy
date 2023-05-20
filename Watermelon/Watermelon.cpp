#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int w; 
int main(){
//	#ifndef ONLINE_JUDGE
//		freopen("tracker.in","r",stdin);
//		freopen("tracker.out","w",stdout);
//	#endif
	scanf("%d",&w);
	if (w==2){
		cout<<"NO"<<endl;
	}else if (w%2==0){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	return 0;
}

