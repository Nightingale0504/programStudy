#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
using namespace std;
#define int long long
const int maxN=1e4+5;
int n,len,sum,tmp;
string s,t;
signed main(){
	scanf("%lld",&n);
	cin>>s;
	len=s.size();
	if (len%2==0){
		len/=2;
	}else{
		len=len/2+1;
	}
	for (int i=0;i<n;i++){
		cin>>t;
		tmp=0;
		for (int j=0;j<s.size();j++){
			if (t[j]==s[j]){
				tmp++;
			}
		}
		if (tmp>=len){
			sum++;
		}
	}
	printf("%lld\n",sum);
	if (sum>0){
		printf("Make persistent efforts.");
	}else{
		printf("Good job!");
	}
	return 0;
}

