#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define int long long
int n,a,b,c;
char last,s[20],ans[20];
signed main(){
	scanf("%lld\n",&n);
	while (n--){
		fgets(s,sizeof(s),stdin);
		if (s[0]=='a' || s[0]=='b' || s[0]=='c'){
			last=s[0];
			s[0]=' ';
		}
		sscanf(s,"%lld %lld",&a,&b);
		switch (last){
			case 'a':{
				c=a+b;
				sprintf(ans,"%lld+%lld=%lld",a,b,c);
				break;
			}
			case 'b':{
				c=a-b;
				sprintf(ans,"%lld-%lld=%lld",a,b,c);
				break;
			}
			case 'c':{
				c=a*b;
				sprintf(ans,"%lld*%lld=%lld",a,b,c);
				break;
			}
		}
		printf("%s\n%lld\n",ans,strlen(ans));
	}
	return 0;
}

