#include<bits/stdc++.h>
using namespace std;
int main(){
	// part:define variable
	int kidsNum;
	int candyUpper;
	int candyLower;
	int ans=-1;
	// part:enter kindsNum,candyUpper and candyLower
	cin>>kidsNum;
	cin>>candyUpper;
	cin>>candyLower;
	// part:calcution reward candys
	for (int i=candyLower;i>=candyUpper;i--){
		int j=i;
		while (j-kidsNum>0){
			j-=kidsNum;
		}
		if (j!=kidsNum){
			ans=max(ans,j);
		}
	}
	// part:output result
	cout<<ans;
	return 0;
}

