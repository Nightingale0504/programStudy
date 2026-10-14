#include<bits/stdc++.h>
#define int long long
using namespace std;
int possword,cnt=1;
signed main(){
    printf("请输入密码: ");
    scanf("%lld",&possword);
    while (possword!=123456 && cnt<3){
        printf("密码错误，请重新输入: ");
        scanf("%lld",&possword);
        cnt++;
    }
    if (cnt==3){
        printf("账号锁定");
    }else{
        printf("登录成功");
    }
    return 0;
}