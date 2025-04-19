#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n,t1,t2;
int a,b;
signed main(){
	scanf("%lld",&n);
	while (n--){
		scanf("%lld%lld",&t1,&t2);
		if (t1==1 && t2==2) a++;
		else if (t1==2 && t2==3) a++;
		else if (t1==1 && t2==3) b++;
		else if (t1==2 && t2==1) b++;
		else if (t1==3 && t2==2) b++;
		else if (t1==3 && t2==1) a++;
	}
	if (a>b) printf("a win");
	else if (b>a) printf("b win");
	else printf("tie");
	return 0;
}

