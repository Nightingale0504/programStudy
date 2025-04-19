#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n,tmp,minNum;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&tmp);
		minNum=min(minNum,tmp);
	}
	printf("%d",minNum);
	return 0;
}

