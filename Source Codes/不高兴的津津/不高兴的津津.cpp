#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int schoolClass[8],momClass[8],totalClass[8];
	for (int i=1;i<=7;i++){
		cin>>schoolClass[i];
		cin>>momClass[i];
	}
	for (int i=1;i<=7;i++){
		totalClass[i]=schoolClass[i]+momClass[i];
	}
	for (int i=1;i<=7;i++){
		if (totalClass[i]>8){
			cout<<i;
			return 0;
		}
	}
	cout<<0;
	return 0;
}

