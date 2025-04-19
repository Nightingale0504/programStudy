#include<bits/stdc++.h> 
using namespace std;
char a[4];
int s[9],p,n,i=6;
long long f(int x){
	if (x==1) return (long long)2*pow(3,n-1)-1;
	if (x) return (long long)pow(2,n)-1;
	return (long long)pow(3,n-1);
}
int main(){
	scanf("%d",&n);
	while(i--) scanf("%s",a),s[(a[0]-'A')*3+a[1]-'A']=i;
	if (s[1]>s[2]){
		if (s[5]<s[3])p=1;
		else if (s[6]>s[7]) p=2;
	}else if (s[7]<s[6]) p=1;
	else if (s[3]>s[5]) p=2;
	printf("%lld",f(p));
	return 0;
}

