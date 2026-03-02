#include<bits/stdc++.h>
using namespace std;
#define int long long
struct node{
    int age;
    string name;
};
// 函数指针传参
void e(int a){
    a=a+20;
}
void f(int *a){
    *a=*a+20;
}
// 函数引用传参
void g(int &a){
    a=a+20;
}
signed main(){
    /* 指针
        1. 定义：指针是一个变量，存储另一个变量的地址。
        2. 取地址运算符 &
            (1) int a=10; cout<<&a;
        3. 解引用运算符 *, 作用: 访问指针所指向的变量
            (1) int a=10; cout<<*(&a);
        4. 指针
            (1) int a=10; int *p=&a;
            (2) 指针大小与编译器有关
    */
   /* 引用
        1. 定义：引用是一个变量的别名，必须在定义时初始化，并且不能改变引用的对象。
        2. 引用的使用
            (1) int a=10; int &r=a; cout<<r;
   */
    // 指针和数组
    int a[4]={1,2,3,4};
    int *p=a;
    printf("%lld %lld\n",p,&a[0]);
    for (int i=0;i<4;i++){
        printf("%lld ",&a[i]);
        printf("%lld ",p[i]);
    }
    printf("\n");
    // 结构体指针
    node b={20,"Alice"};
    node *p1=&b;
    printf("%s %lld\n",p1->name.c_str(),p1->age);
    p1->age=30;
    p1->name="Bob";
    printf("%s %lld\n",p1->name.c_str(),p1->age);
    // 函数指针传参
    int c=10;
    e(c);
    printf("%lld\n",c);
    f(&c);
    printf("%lld\n",c);
    // 函数引用传参
    g(c);
    printf("%lld\n",c);
    return 0;
}