#include<bits/stdc++.h> 
using namespace std;
#define maxN 1005
struct request{
	int length;
	int code;
};
int book[maxN];
request reader[maxN];
int n,q;
int t1,t2;
int main(){
	scanf("%d%d",&n,&q);
	for (int i=0;i<n;i++){
		scanf("%d",&book[i]);
	}
	for (int i=0;i<q;i++){
		scanf("%d%d",&t1,&t2);
		reader[i].length=t1;
		reader[i].code=t2;
	}
	for (int i=0;i<q;i++){
		for (int j=0;j<n;j++){
			
		}
	}
	return 0;
}

