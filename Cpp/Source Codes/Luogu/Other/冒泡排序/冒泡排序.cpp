#include<bits/stdc++.h> 
using namespace std;
int main(){
	// part:define variable
	int a[5]={7,3,1,6,4};
	int i=0,j=0;
	// part:exchange a and b numbers
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			if (a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	// part:output result
	for (i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}
