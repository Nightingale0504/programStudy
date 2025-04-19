#include<bits/stdc++.h> 
using namespace std;
string s;
int b[30];
bool vis[30];
bool isPrime(int x){
	if (x==0 || x==1){
		return false;
	}
	if (x==2){
		return true;
	}
	for (int j=2;j*j<=x;j++){
		if(x%j==0){
			return false;
		}
	}
	return true;
}
int main(){
	int max=0,min=999;
	scanf("%s",&s);
	memset(vis,true,sizeof(vis));
	int n=s.size();
	for(int i=0;i<n;i++){
			b[s[i]-'a']++;
			vis[s[i]-'a'] =false;
	}
	for(int i=0;i<26;i++){
		if(b[i]>max && vis[i]==false){
			max=b[i];
		}
		if(b[i]<min && vis[i]==false){
			min=b[i];
		}
	}
	if (isPrime(max-min)==false){
		printf("%s\n%s\n","No Answer","0");
	}else{
		printf("%s\n%d\n","Lucky Word",max-min);
	}
	return 0;
}

