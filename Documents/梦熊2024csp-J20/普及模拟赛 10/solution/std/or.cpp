#include<bits/stdc++.h>
using namespace std;
int main(){
	int T; cin>>T;
	while(T--){
		long long l,r,ans=0;
		scanf("%lld%lld",&l,&r);
		for(int i=0;i<=30;i++){
			//二进制下第i位 
			long long y;
			if(l&(1ll<<i)) y=l;//l的第i位二进制为1 
			//if((l>>i)&1)
			else{//l的第i位二进制为0 
				y=(l|(1ll<<i));
				for(int j=0;j<i;j++)
					if(y&(1ll<<j)) y^=(1ll<<j);
			}
			if(y<=r) ans|=(1<<i);
		}
		printf("%lld\n",ans);
	}
	return 0;
}
/*
位运算
拆位角度 
每一位分别去进行考虑
第0位为1的数在[l,r]内有没有出现过 
第1位为1的数在[l,r]内有没有出现过 
第2位为1的数在[l,r]内有没有出现过 

[l,r]有没有一个数，它的二进制下第x位为1
找到大于等于l的第一个二进制下第x位为1的数 y
y<=r说明存在，否则不存在 
1.l的第x位为1，那么y=l
2.l的第x位不为1,那么y=? 
把l的第x位改成1,0到x-1位都改成0,这个数就是y

位运算->每一位是独立的
每一位都拆开来就从2^30可能变成2种可能 
 
 


*/
