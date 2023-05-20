#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	int a,b,i,sum=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for (i=a;i<=a+b-1;i++){
        if (i%7==6 || i%7==0){
            continue;
        }
        sum+=250;
    }
    printf("%d\n",sum);
	return 0;
}

