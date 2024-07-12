#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
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

