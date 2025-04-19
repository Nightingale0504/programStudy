#include<bits/stdc++.h> 
using namespace std;
#define int long long
int p,a,b,c,d;
signed main(){
	scanf("%lld%lld%lld%lld%lld",&p,&a,&b,&c,&d);
	switch (p){
		case 1:{
			if (a==c || b==d){
				printf("Yes\n");
			}else{
				printf("No\n");
			}
			break;
		}
		case 2:{
			printf("No\n");
			break;
		}
		case 3:{
			int var1=abs(a-c);
			int var2=abs(b-d);
			if (var1==2 && var2==1){
				printf("Yes\n");
			}else if (var1==1 && var2==2){
				printf("Yes\n");
			}else{
				printf("No\n");
			}
			break;
		}
		default:{
			int var1=abs(a-c);
			int var2=abs(b-d);
			if (var1==2 && var2==2){
				printf("Yes\n");
			}else{
				printf("No\n");
			}
			break;
		}
	}
	return 0;
}

