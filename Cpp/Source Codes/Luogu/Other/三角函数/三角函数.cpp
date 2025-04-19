#include<bits/stdc++.h> 
using namespace std;
int num[3],gcd;
int main(){
	for(int i=0;i<3;i++){
		cin>>num[i];
	}
	sort(num,num+3);
	for(gcd=num[0];gcd>1;gcd--){
		if(num[0]%gcd==0&&num[2]%gcd==0){
			break;
		}
	}
	cout<<num[0]/gcd<<"/"<<num[2]/gcd; 
	return 0;
}

