#include<bits/stdc++.h>
using namespace std;
inline void solve(){
	int l,r,x;
	cin>>l>>r;
	x=1;int res=0;
	while(x*2<=r){
		res++;
		x*=2;
	}
	cout<<res<<endl;
}
signed main(){
	solve();
	return 0;
}
/*
l=1怎么处理
[1,r] 以内的质因数最多的个数
 2*2*2*2*2*2
l=1:2^k 
2l<=r
2^k
*/
