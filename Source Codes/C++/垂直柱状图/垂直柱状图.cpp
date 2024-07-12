#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
int ff[26]; 
int main(){
	int n,maxn=0;
	char a[81];
    for(int i=0;i<4;i++){
        getline(cin,a);
        n=strlen(a);
        for(int j=0;j<n;j++){
        	if(a[j]>='A' && a[j]<='Z'){
        		ff[a[j]-'A']++;
			}
		}
    }
    for(int i=0;i<26;i++){
    	maxn=max(maxn,ff[i]);
	}
    for(int i=maxn;i>0;i--){
    	for(int j=0;j<26;j++){
    		if(ff[j]>=i){
    			printf("* ");
			}else{
				printf("  ");
			}
    		printf("\n");
    	}
	}
    for(int i=0;i<26;i++){
    	printf("%c ",i+'A');
	}
	return 0;
}

