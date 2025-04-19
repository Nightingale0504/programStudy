#include<bits/stdc++.h> 
using namespace std;
int money,cost,mama,flag=1,monthofdeath;
int main(){
	for(int i=1;i<=12;i++){
        money+=300;
        scanf("%d",&cost);
        money-=cost;
        if (money<0){     
            flag=0;
            monthofdeath=i;
            break;
        }
        mama+=money/100;
        money%=100;   
    }    
    if (flag==1){
        money+=mama*120;
        printf("%d",money);
    }            
    else{
        printf("%d",-monthofdeath);
    }    
	return 0;
}

