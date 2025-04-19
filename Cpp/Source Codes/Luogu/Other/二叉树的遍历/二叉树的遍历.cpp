#include<bits/stdc++.h> 
using namespace std;
#define maxN 1000005
struct node{
	int left,right,root;
}a[maxN];
int n,t1,t2;
void preorderTraversal(int x){
	if (x==0){
		return;
	}
	printf("%d ",a[x].root);
	preorderTraversal(a[x].left);
	preorderTraversal(a[x].right);
}
void inorderTraversal(int x){
	if (x==0){
		return;
	}
	inorderTraversal(a[x].left);
	printf("%d ",a[x].root);
	inorderTraversal(a[x].right);
}
void postorderTraversal(int x){
	if (x==0){
		return;
	}
	postorderTraversal(a[x].left);
	postorderTraversal(a[x].right);
	printf("%d ",a[x].root);
}
int main(){
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		a[i].root=i;
		scanf("%d%d",&a[i].left,&a[i].right);
	}
	preorderTraversal(1);
	printf("\n");
	inorderTraversal(1);
	printf("\n");
	postorderTraversal(1);
	printf("\n");
	return 0;
}

