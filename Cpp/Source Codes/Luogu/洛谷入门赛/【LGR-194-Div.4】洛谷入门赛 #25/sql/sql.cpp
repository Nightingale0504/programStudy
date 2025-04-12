#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<climits>
#include<cmath>
using namespace std;
#define int long long
int n,m,x,y; 
string c,t,h,X;
struct table{
	int sizeX,sizeY;
	string tn,hd[15],content[105][15];
}tb[15];
string s;
signed main(){
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		cin>>s;
		tb[i].tn=s;
		scanf("%lld%lld",&x,&y);
		x--;
		tb[i].sizeX=x;
		tb[i].sizeY=y;
		for (int j=0;j<y;j++){
			cin>>tb[i].hd[j];
		}
		for (int j=0;j<x;j++){
			for (int k=0;j<y;k++){
				cin>>tb[i].content[j][k];
			}
		}
	}
	scanf("%lld",&m);
	while (m--){
		scanf("select ");
		cin>>c;
		scanf(" from ");
		cin>>t;
		scanf(" where ");
		cin>>h;
		scanf("=");
		cin>>x;
		for (int i=0;i<n;i++){
			if (tb[i].tn==t){
				for (int j=0;j<tb[i].sizeY;j++){
					if (tb[i].hd[j]==h){
						for (int k=0;k<tb[i].sizeX;k++){
							if (tb[i].content[j][k]==X){
								for (int a=0;a<tb[i].sizeY;a++){
									if (tb[i].hd[a]==c){
										cout<<tb[i].content[j][a]<<"\n";
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

