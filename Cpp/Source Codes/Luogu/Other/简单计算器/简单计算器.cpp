#include<bits/stdc++.h> 
using namespace std;
#define int long long
int a,b,ans;
char c;
signed main(){
	scanf("%lld %lld %c",&a,&b,&c);
	switch (c){
		case '+':{
			ans=a+b;
			break;
		}
		case '-':{
			ans=a-b;
			break;
		}
		case '*':{
			ans=a*b;
			break;
		}
		case '/':{
			if (b==0){
				printf("Divided by zero!");
				return 0;
			}else{
				ans=a/b;
			}
			break;
		}
		default:{
			printf("Invalid operator!");
			return 0;
			break;
		}
	}
	printf("%lld",ans);
	return 0;
}

