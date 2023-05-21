/*
 * @Author: OperatorRosmontis capture1969@hotmail.com
 * @Date: 2023-03-05 09:45:44
 * @LastEditors: OperatorRosmontis capture1969@hotmail.com
 * @FilePath: \Program\C++\Improvement of Calculator\ioc.cpp
 * @Description: P1022 - 计算器的改良
 * 心怀不惧，方能翱翔于天际
 * Copyright (c) 2023 by Boxuan Zhang, All Rights Reserved. 
 */
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
char c,a;
int f=1,now=1,k,b,x;
bool r;
double ans;
int main(){
    while (cin>>c){
        if (c=='-'){
            b+=now*f*x;
            x=0;
            f=-1;
            r=0;
        }
        if (c=='+'){
            b+=now*f*x;
            x=0;
            f=1;
            r=0;
        }
        if (c=='='){
            b+=now*f*x;
            x=0;
            f=1;
            now=-1;
            r=0;
        }
        if (c>='a' && c<='z'){
            if (r){
                k+=now*f*x;
                x=0;
            }else{
                k+=now*f;
            }
            a=c;
            r=0;
        }
        if (c>='0' && c<='9'){
            x=x*10+c-'0';
            r=1;
        }
    }
    b+=now*f*x;
    ans=double(-b*1.0/k);
    if (ans==-0.0){
        ans=0;
    }
    printf("%c=%.3lf",a,ans);
    return 0;
}