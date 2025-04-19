#include<bits/stdc++.h> 
using namespace std;
#define maxN 2005
int n;
int p[maxN];
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>p[i];
	}
	do{
		int tmp=p[n];
		for (int i=n;i>=2;i--){
			p[i]=p[i-1];
		}
		p[1]=tmp;
		for (int i=1;i<=n;i++){
			cout<<p[i]<<" \n"[i==n];
		}
	} while(p[n]!=n);
	return 0;
}

