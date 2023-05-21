#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
//	#ifndef ONLINE_JUDGE
//		freopen("nightingale.in","r",stdin);
//		freopen("nightingale.out","w",stdout);
//	#endif
	char s[105];
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z'){ 
        	printf("%c",s[i]-'a'+'A');
        }else{ 
        	printf("%c",s[i]);
        }
    }
	return 0;
}

