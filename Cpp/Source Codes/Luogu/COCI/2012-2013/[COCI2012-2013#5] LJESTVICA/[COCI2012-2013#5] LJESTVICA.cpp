#include<bits/stdc++.h> 
using namespace std;
int x,y;
string s;
int main(){
	cin>>s;
	for (int i=0;i<=s.size()-1;i++){
		if (i==0 || s[i-1]=='|'){
			if (s[i]=='C' || s[i]=='F' || s[i]=='G'){
				x++;
			}else if (s[i]=='A' || s[i]=='D' || s[i]=='E'){
				y++;
			}
		}
	}
	if (x>y){
		printf("C-dur");
	}else if (x<y){
		printf("A-mol");
	}else{
		if (s[s.size()-1]=='A'){
			printf("A-mol");
		}else{
			printf("C-dur");
		}
	}
	return 0;
}

