#include<bits/stdc++.h> 
using namespace std;
#define int long long
int envelopeArea,letterArea,grossMass;
int n,x,y,a,b;
int m,cntA,cntB;
int maximumSV,surpriseValue;
signed main(){
	scanf("%lld%lld%lld%lld%lld",&n,&x,&y,&a,&b);
	for (int i=0;i<n;i++){
		scanf("%lld%lld%lld",&envelopeArea,&letterArea,&grossMass);
		m=grossMass-envelopeArea*x-letterArea*y;
		if (m>0){
			cntA++;
			cntB=0;
			surpriseValue+=m;
			if (m>grossMass-m){
				surpriseValue+=(m+1)/2;
			}
			if (cntA>=a){
				surpriseValue*=2;
			}
			maximumSV=max(maximumSV,surpriseValue);
		}else{
			cntB++;
			cntA=0;
			if (cntB>=b){
				surpriseValue/=2;
			}
		}
	}
	printf("%lld %lld",maximumSV,surpriseValue);
	return 0;
}

