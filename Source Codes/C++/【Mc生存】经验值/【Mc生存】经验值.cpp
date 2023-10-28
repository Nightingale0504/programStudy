#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int n,level,experienceValue;
double blood=10,experienceValueT,bloodT;
void solveLevel(){
	int o=1;
	while (experienceValue>=o){
		experienceValue-=o;
		level++;
		o*=2;
	}
}
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	scanf("%lld",&n);
	for (int i=0;i<n;i++){
		scanf("%lf%lf",&bloodT,&experienceValueT);
		blood-=bloodT;
		if (blood<=0){
			break;
		}
		experienceValue+=experienceValueT;
		if (blood>10){
			blood=10;
		}
	}
	solveLevel();
	printf("%lld %lld",level,experienceValue);
	return 0;
}

