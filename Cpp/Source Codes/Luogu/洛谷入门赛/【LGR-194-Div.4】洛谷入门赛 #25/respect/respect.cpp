#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<sstream>
using namespace std;
#define int long long
const string tgt="respect";
int n,k,p,sum,num;
string s,tmp;
string a;
signed main(){
	scanf("%lld",&n);
	while (n--){
		cin>>s;
		scanf("%lld",&k);
		if (k==0){
			getline(cin,a);
			getline(cin,a);
			if (s==tgt){
				printf("1\n");
			}
			continue;
		}
		while (k--){
			cin>>p;
			tmp=s.substr(num,p-1);
			if (tmp==tgt){
				sum++;
			}
			num+=p;
		}
		printf("%lld\n",sum);
	}
	return 0;
}

