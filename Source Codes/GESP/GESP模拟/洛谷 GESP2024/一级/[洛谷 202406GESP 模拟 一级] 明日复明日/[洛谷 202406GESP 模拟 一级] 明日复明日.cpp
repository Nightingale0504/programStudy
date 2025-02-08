#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define int long long
int m,d;
void judge(int x){
	if (d<x){
	    d++;
	}else{
		m++;
		d=1;
	}
}
signed main(){
	scanf("%lld%lld",&m,&d);
	switch (m){
		case 1:{
			judge(31);
			break;
		}
		case 2:{
			judge(28);
			break;
		}
		case 3:{
			judge(31);
			break;
		}
		case 4:{
			judge(30);
			break;
		}
		case 5:{
			judge(31);
			break;
		}
		case 6:{
			judge(30);
			break;
		}
		case 7:{
			judge(31);
			break;
		}
		case 8:{
			judge(31);
			break;
		}
		case 9:{
			judge(30);
			break;
		}
		case 10:{
			judge(31);
			break;
		}
		case 11:{
			judge(30);
			break;
		}
		case 12:{
			judge(31);
			if (m==13){
				m=1;
				d=1;
			}
			break;
		}
	}
	printf("%lld %lld",m,d);
	return 0;
}

