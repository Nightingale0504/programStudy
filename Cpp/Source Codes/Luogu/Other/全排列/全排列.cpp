#include<bits/stdc++.h> 
using namespace std;
int sum=0;
void searchSum(int begin,int end,int data[]){
	if (begin==end){
		for (int i=0;i<=end;i++){
			printf("%d",data[i]);
		}
		printf("\n");
		sum++;
	}else{
		for (int i=begin;i<=end;i++){
			swap(data[begin],data[i]);
			searchSum(begin+1,end,data);
			swap(data[begin],data[i]);
		}
	}
}
int main(){

	int data[10]={ 1,2,3,4,5,6,7,8,9.10 };
	searchSum(0,3,data);
	printf("%d",sum);
	return 0;
}


