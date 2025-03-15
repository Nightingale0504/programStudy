#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,ans,a[10],b[10];
string s;
signed main(){
	scanf("%lld",&n);
	cin>>s;
	while (n){
		if (n%10==5){
			a[2]++;
		}else if (n%10==9){
			a[6]++;
		}else{
			a[n%10]++;
		}
		n/=10;
	}
	for (int i=0;i<s.length();i++){
		if (s[i]=='5'){
			b[2]++;
		}else if (s[i]=='9'){
			b[6]++;
		}else{
			b[s[i]-'0']++;
		}
	}
	while (1){
		for (int i=0;i<=8;i++){
			if (a[i]!=0){
				if (b[i]>=a[i]){
					b[i]-=a[i];
				}else{
					printf("%lld",ans);
					return 0;
				}
			}
		}
		ans++;
	}
	printf("%lld",ans);
	return 0;
}

