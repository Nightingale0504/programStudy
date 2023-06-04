#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<climits>
using namespace std;
#define int long long
#define INF LONG_LONG_MAX
struct amorphophalmsKonjac{
	string name,website,sex;
	int age,rp;
};
signed main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	amorphophalmsKonjac Nightingale;
	Nightingale.name="Boxuan Zhang";
	Nightingale.website="https://nightingale0504.github.io";
	Nightingale.age=14;
	Nightingale.rp=INF;
	Nightingale.sex="male";
	while (true){
		printf("Boxuan Zhang is a AK (Amorphophalms konjac).\n");
	}
	return 0;
}

