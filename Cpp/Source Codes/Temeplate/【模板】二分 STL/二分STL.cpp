#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
	// 二分 STL 模板
	// 1. lower_bound() --- >=x
	//  Usage: lower_bound(数组名+起始下标,数组名+终止下标,x)
	
	// 2. upper_bound() --- >x
	//  Usage: 同上
	
	int a[]={1,2,3,4,5,6,7,7,7,7,7,7,7,7,7,7,8,9,10};
	int t1=lower_bound(a+0,a+15,7)-a;
	int t2=upper_bound(a+0,a+15,7)-a;
	int ans=t2-t1;
	printf("%lld",ans); 
	return 0;
}

