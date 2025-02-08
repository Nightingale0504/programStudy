#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define maxN 5005
int n,m,p;
int t1,t2;
int set[maxN];
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
	scanf("%d%d%d",&n,&m,&p);
	for (int i=0;i<n;i++){
		set[i]=i;
	}
	for (int i=0;i<m;i++){
		scanf("%d%d",&t1,&t2);
		merge(t1,t2);
	}
	for (int i=0;i<p;i++){
		scanf("%d%d",&t1,&t2);
		printf("%s\n",find(t1)==find(t2)?"Yes":"No");
	}
	return 0;
}

