#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxN 10005
int set[maxN];
int n,m;
int t1,t2,z;
int find(int x){
	if (set[x]==x){
		return x;
	}else{
		set[x]=find(set[x]);
		return set[x];
	}
} 
void merge(int i,int j){
	set[find(j)]=find(i);
}
int main(){
	scanf("%d%d",&n,&m);
	for (int i=0;i<n;i++){
		set[i]=i;
	}
	while (m--){
		scanf("%d%d%d",&z,&t1,&t2);
		switch (z){
			case 1:{
				merge(t1,t2);
				break;
			}
			case 2:{
				if (find(t1)==find(t2)){
					printf("Y\n");
				}else{
					printf("N\n");
				}
				break;
			}
		}
	}
	return 0;
}

