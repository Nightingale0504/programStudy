#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
#define int long long
int n,cnt,c;
char a[55],b[55];
signed main(){
	scanf("%lld",&n);
	while (n--){
		scanf("%s %s",&a,&b);
		cnt=0;
		c=0;
		if (a==b){
			printf("similar\n");
		}else if (strlen(a)==strlen(b)){
			for (int i=0;i<strlen(a);i++){
				if (a[i]==b[i]){
					cnt++;
				}
			}
			if (cnt+1==strlen(a) || cnt==strlen(a)){
				printf("similar\n");
			}else{
				printf("not similar\n");
			}
		}else if (strlen(a)+1==strlen(b)){
			for (int i=0;i<strlen(b);i++){
				if (a[c]==b[i]){
					cnt++;
					c++;
				}
			}
			if (cnt==strlen(a)){
				printf("similar\n");
			}else{
				printf("not similar\n");
			}
		}else if (strlen(a)-1==strlen(b)){
			swap(a,b);
			for (int i=0;i<strlen(b);i++){
				if (a[c]==b[i]){
					cnt++;
					c++;
				}
			}
			if (cnt==strlen(a)){
				printf("similar\n");
			}else{
				printf("not similar\n");
			}
		}else{
			printf("not similar\n");
		}
	}
	return 0;
}

