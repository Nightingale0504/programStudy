#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int a[11]={ 10,9,7,1,3,2,5,6,4,8 };
	for (int i=0;i<11;i++){
		for (int j=i+1;j<11;j++){
			if (a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	} 
	for (int i=0;i<11;i++){
		printf("%d ",a[i]);
	}
}
