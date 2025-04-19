#include<bits/stdc++.h> 
using namespace std;
#define int long long
int x,y,z;
int a[15];
signed main(){
	for (int i=1;i<=9;i++){
    	a[i]=i;
    }
    do{
    	x=0;
    	y=0;
    	z=0;
        for(int i=1;i<=3;i++){
            x+=a[i]*pow(10,3-i);
        }
        for(int i=4;i<=6;i++){
            y+=a[i]*pow(10,6-i);
        }
        for(int i=7;i<=9;i++){
            z+=a[i]*pow(10,9-i);
        }
        if(x*6==y*3 && y*3==z*2){
            printf("%lld %lld %lld\n",x,y,z);
        }
    }while (next_permutation(a+1,a+10));
	return 0;
}

