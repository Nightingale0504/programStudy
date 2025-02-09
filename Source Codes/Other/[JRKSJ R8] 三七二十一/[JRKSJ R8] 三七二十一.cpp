#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
#define int long long
string a;
int s;
signed main(){
	cin>>a;
	for (int i=0;i<a.length();i++){
		if (a[i]=='1' || a[i]=='2' || a[i]=='4' || a[i]=='8'){
			s++;
		}
		if (a[i]=='6' && a[i+1]=='5' && a[i+2]=='5' && a[i+3]=='3' && a[i+4]=='6'){
			s++;
			i+=4;
		}
	}
	printf("%lld",s);
	return 0;
}

