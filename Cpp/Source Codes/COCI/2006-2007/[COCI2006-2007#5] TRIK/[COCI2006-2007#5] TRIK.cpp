#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
char s[55];
bool ans[3]={1,0,0};
signed main(){
	scanf("%s",&s);
	for (int i=0;i<sizeof(s);i++){
		switch (s[i]){
			case 'A':{
				swap(ans[0],ans[1]);
				break;
			}
			case 'B':{
				swap(ans[1],ans[2]);
				break;
			}
			case 'C':{
				swap(ans[2],ans[0]);
				break;
			}
		}
	}
	for(int i=0;i<3;i++){
		if (ans[i]==1){
			printf("%lld",i+1);
		}
	}
	return 0;
}

