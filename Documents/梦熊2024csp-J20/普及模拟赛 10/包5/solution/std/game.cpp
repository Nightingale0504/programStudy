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
l=1��ô����
[1,r] ���ڵ����������ĸ���
 2*2*2*2*2*2
l=1:2^k 
2l<=r
2^k
*/
