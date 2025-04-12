#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
#define maxN 100010
int n,root,cnt,opt,x,num;
struct Node{
	int left,right,size,value,num;
	Node (int l,int r,int s,int v): left(l),right(r),size(s),value(v),num(1){}
	Node (){}
}t[maxN];
inline void update(int root){
	t[root].size=t[t[root].left].size+t[t[root].right].size+t[root].num;
}
int srank(int x,int root){
	if (root){
		if (x<t[root].value){
			return srank(x,t[root].left);
		}
		if (x>t[root].value){
			return srank(x,t[root].right)+t[t[root].left].size+t[root].num;
		}
		return t[t[root].left].size+t[root].num;
	}
	return 1;
}
int kth(int x,int root){
	if (x<=t[t[root].left].size){
		return kth(x,t[root].left);
	}
	if (x<=t[t[root].left].size+t[root].num){
		return t[root].value;
	}
	return kth(x-t[t[root].left].size-t[root].num,t[root].right);
}
void insert(int x,int &root){
	if (x<t[root].value){
		if (!t[root].left){
			t[t[root].left=++cnt]=Node(0,0,1,x);
		}else{
			insert(x,t[root].left);
		}
	}else if (x>t[root].value){
		if (!t[root].right){
			t[t[root].right=++cnt]=Node(0,0,1,x);
		}else{
			insert(x,t[root].right);
		}
	}else{
		t[root].num++;
	}
	update(root);
}
signed main(){
	scanf("%lld",&n);
	t[root=++cnt]=Node(0,0,1,INT_MAX);
	while (n--){
		scanf("%lld%lld",&opt,&x);
		num++;
		switch (opt){
			case 1:{
				printf("%lld\n",srank(x,root));
				break;
			}
			case 2:{
				printf("%lld\n",kth(x,root));
				break;
			}
			case 3:{
				printf("%lld\n",kth(srank(x,root)-1,root));
				break;
			}
			case 4:{
				printf("%lld\n",kth(srank(x+1,root),root));
				break;
			}
			default:{
				num--;
				insert(x,root);
				break;
			}
		}
	}
	return 0;
}

