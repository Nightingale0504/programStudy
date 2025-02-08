#include<bits/stdc++.h>
using namespace std;
// part:define function
void createDream(int n,int m){
	printf("这是第%d层梦境\n",n);
	if (n==m){
		printf("任务完成\n");
		return ;
	}
	createDream(n+1,m);
	printf("现在你回到了第%d层梦境\n",n);
} 
int main(){
	// part:define variable
	int x;
	// part:enter x
	cin>>x;
	// part:run function with x	createDream(1,x);
	return 0;
}
