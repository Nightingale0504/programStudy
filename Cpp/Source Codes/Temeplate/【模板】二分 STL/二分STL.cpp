#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<climits>
#include<cmath>
#define int long long
using namespace std;
signed main(){
	// ���� STL ģ��
	// 1. lower_bound() --- >=x
	//  Usage: lower_bound(������+��ʼ�±�,������+��ֹ�±�,x)
	
	// 2. upper_bound() --- >x
	//  Usage: ͬ��
	
	int a[]={1,2,3,4,5,6,7,7,7,7,7,7,7,7,7,7,8,9,10};
	int t1=lower_bound(a+0,a+15,7)-a;
	int t2=upper_bound(a+0,a+15,7)-a;
	int ans=t2-t1;
	printf("%lld",ans); 
	return 0;
}

