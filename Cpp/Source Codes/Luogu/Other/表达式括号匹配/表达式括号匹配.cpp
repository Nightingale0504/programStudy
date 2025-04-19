#include<bits/stdc++.h> 
using namespace std;
#define int long long
int ok;
char a;
signed main(){
//	#ifndef ONLINE_JUDGE
//		freopen("nightingale.in","r",stdin);
//		freopen("nightingale.out","w",stdout);
//	#endif
	for (int i=0;;i++){
		a=getchar();
		if (i==0 && a==')'){
			printf("NO");
			return 0;
		}
		if (a=='('){
			ok++;
		}
		if (a==')'){
			ok--;
		}
		if (ok<0){
			printf("NO");
			return 0;
		}
		if (a=='@'){
			if (!ok){
				printf("YES");
			}else{
				printf("NO");
			}
			return 0;
		}
	}
	return 0;
}

