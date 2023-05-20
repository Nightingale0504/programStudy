#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
string a;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	getline(cin,a);
	for(int i=0;i<a.length();i++){
		if(a[i]>='A'&&a[i]<='Z'){
			if(a[i]=='A'){
				a[i]='Z';
			}else{
				a[i]--;
			}	
		}else if(a[i]>='a'&&a[i]<='z'){
			if(a[i]=='a'){
				a[i]='z';
			}else{
				a[i]--;
			}	
		}
	}
	cout<<a;
	return 0;
}
