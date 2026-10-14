#include<bits/stdc++.h>
#define int long long
using namespace std;
int age,height;
signed main(){
    scanf("%lld%lld",&age,&height);
    if (age>=14 && height>=160){
        printf("允许参赛");
    }else{
        printf("不符合参赛条件");
    }
    return 0;
}