#include<bits/stdc++.h> 
using namespace std;
#define int long long
double m=7,s,x,l,r,now;
signed main(){
	scanf("%lf%lf",&s,&x);
	l=s-x;
	r=s+x;
	while (1){
		if (now>r){
			printf("n");
			return 0;
		}
		if (l<=now && now<=r){
			if (now+m>r){
				printf("n");
				return 0;
			}else{
				printf("y");
				return 0;
			}
		}
		now+=m;
		m*=0.98;
	}
	return 0;
}

