#include<bits/stdc++.h> 
using namespace std;
#define int long long
int a,b,c,cnt=0,sum;
int p[10]={0,1,2,3,4,5,6,7,8,9};
signed main(){
	scanf("%lld%lld%lld",&a,&b,&c);
	if (a==0 || b==0 || c==0){
		printf("No!!!");
		exit(0);
	}
	sum=a*b*c;
	a=sum/a;
	b=sum/b;
	c=sum/c;
	do{
		if ((100*p[1]+10*p[2]+p[3])*a==(100*p[4]+10*p[5]+p[6])*b && (100*p[1]+10*p[2]+p[3])*a==(100*p[7]+10*p[8]+p[9])*c){
			printf("%lld%lld%lld %lld%lld%lld %lld%lld%lld\n",p[1],p[2],p[3],p[4],p[5],p[6],p[7],p[8],p[9]);
			cnt++;
		}
	}while (next_permutation(p+1,p+10));
	if (cnt==0)
		printf("No!!!");
	return 0;
}

