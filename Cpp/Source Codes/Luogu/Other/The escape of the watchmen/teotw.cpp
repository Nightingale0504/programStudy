#include<bits/stdc++.h> 
using namespace std;
int m,s,t,now,s1,s2;
int main(){
    scanf("%d%d%d",&m,&s,&t);
    for (int i=1;i<=t;i++){
        s1+=17;
        if (m>=10){
            s2+=60;
            m-=10;
        }else{
            m+=4;
        }
        if (s2>s1){
            s1=s2;
        }
        if (s1>s){
            printf("Yes\n%d\n",i);
            return 0;
        }
    }
    printf("No\n%d\n",s1);
    return 0;
}