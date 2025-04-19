#include<bits/stdc++.h> 
using namespace std;
// part:define function
void createDream(int n,int m){
	printf("���ǵ�%d���ξ�\n",n);
	if (n==m){
		printf("�������\n");
		return ;
	}
	createDream(n+1,m);
	printf("������ص��˵�%d���ξ�\n",n);
} 
int main(){
	// part:define variable
	int x;
	// part:enter x
	cin>>x;
	// part:run function with x	createDream(1,x);
	return 0;
}
