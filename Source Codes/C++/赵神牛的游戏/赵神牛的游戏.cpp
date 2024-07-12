#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
struct skill{
	int sp,damage,id;
}s;
int k,m,n,flag;
signed main(){
	scanf("%lld%lld%lld",&k,&m,&n);
	for (int i=1;i<=m;i++){
		scanf("%lld%lld",&s.sp,&s.damage);
		s.id=i;
		if (s.sp==0 && s.damage>0){
			printf("%lld ",s.id);
			flag=1;
			continue;
		}
		if (k/s.sp*s.damage>=n){
			printf("%lld ",s.id);
			flag=1;
		}
	}
	if (flag==0){
		printf("-1");
	}
	return 0;
}

