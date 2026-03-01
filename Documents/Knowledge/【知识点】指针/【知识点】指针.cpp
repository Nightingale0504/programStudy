#include<bits/stdc++.h>
using namespace std;
#define int long long
strcu
signed main(){
    /* 指针
        1. 定义：指针是一个变量，存储另一个变量的地址。
        2. 取地址运算符 &
            (1) int a=10; cout<<&a;
        3. 解引用运算符 *, 作用: 访问指针所指向的变量
            (1) int a=10; cout<<*(&a);
        4. 指针
            (1) int a=10; int *p=&a;
    */
   // 指针和数组
    int a[4]={1,2,3,4};
    int *p=a;
    printf("%lld %lld\n",p,&a[0]);
    for (int i=0;i<4;i++){
        printf("%lld ",&a[i]);
        printf("%lld ",p[i]);
    }
    return 0;
}