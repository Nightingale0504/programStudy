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
using namespace std;
#define int long long
string s;
int r=1;
int q[10],a;
int state;
inline int check(){
    if (q[1]==q[2] && q[2]==q[3]){
    	return q[1];
	}else if (q[4]==q[5] && q[5]==q[6]){
		return q[4];
	}else if (q[7]==q[8] && q[8]==q[9]){
		return q[7];
	}else if (q[1]==q[4] && q[4]==q[7]){
		return q[1];
	}else if (q[2]==q[5] && q[5]==q[8]){
		return q[2];
	}else if (q[3]==q[6] && q[6]==q[9]){
		return q[3];
	}else if (q[1]==q[5] && q[5]==q[9]){
		return q[1];
	}else if (q[3]==q[5] && q[5]==q[7]){
		return q[3];
	}else{
		return 0;
	}
}
signed main(){
//	scanf("%s",s.c_str());
	cin>>s;
	for (int i=0;i<s.length();i++){
		a=s[i]-'0';
		q[a]=r;
		r=(-r);
	}
	state=check();
	switch (state){
		case 1:{
			printf("xiaoa wins.");
			break;
		}
		case -1:{
			printf("uim wins.");
			break;
		}
		default:{
			printf("drew.");
			break;
		}
	}
	return 0;
}

