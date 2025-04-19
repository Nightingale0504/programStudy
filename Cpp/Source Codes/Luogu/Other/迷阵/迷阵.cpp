#include<bits/stdc++.h> 
using namespace std;
int n;
bool tree[100005]; 
int main(){
	scanf("%d",&n);
	for (int i=1;i<=5;i++){
		int t=1;
		for (int j=1;j<=n-1;j++){
			if (!tree[t]){
				tree[t]=true;
				t*=2;
			}else{
				tree[t]=false;
				t*=2+1;
			}
		}
		printf("%d ",t);
	}
	return 0;
}

