#include<bits/stdc++.h> 
using namespace std;
int main(){
	int kidsNum;
	int candyUpper;
	int candyLower;
	int ans=-1;
	cin>>kidsNum;
	cin>>candyUpper;
	cin>>candyLower;
	for (int i=candyLower;i>=candyUpper;i--){
		int j=i;
		while (j-kidsNum>0){
			j-=kidsNum;
		}
		if (j!=kidsNum){
			ans=max(ans,j);
		}
	}
	cout<<ans;
	return 0;
}

