#include<bits/stdc++.h> 
using namespace std;
// part:define function
int calcStageNumber(int k){
	double s;
	for (int i=1;;i++){
		s+=1.0/i;
		if (s>k){
			cout<<i;
			break;
		}
	}
}
int main(){
	// part:define variable
	int k;
	// part:enter k
	cin>>k;
	// part:run function 'calcStageNumber' with k
	calcStageNumber(k);
	return 0;
}

