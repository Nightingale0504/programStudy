/*
 * @Author: OperatorRosmontis capture1969@hotmail.com
 * @Date: 2023-03-05 11:56:42
 * @LastEditors: OperatorRosmontis capture1969@hotmail.com
 * @FilePath: \Program\C++\Solve equations\se.cpp
 * @Description: P1689 - 方程求解
 * 心怀不惧，方能翱翔于天际
 * Copyright (c) 2023 by Boxuan Zhang, All Rights Reserved. 
 */
#include<iostream>
#include<cstdio>
#include<climits>
#include<algorithm>
using namespace std;
const int INF=INT_MAX;
char s[105];
int len,x,y,z,op,i=1;
bool opAdd=true;
int main(){
    while (scanf("%c",&s[i++])!=EOF);
    len=i-1;
    for (int i=1;i<=len;i++){
        if (s[i]==' '){
            continue;
        }else if (s[i]>='0' && s[i]<='9'){
            switch (op){
                case 0:{
                    x=x*10+(s[i]-'0');
                    break;
                }
                case 1:{
                    y=y*10+(s[i]-'0');
                    break;
                }
                case 2:{
                    z=z*10+(s[i]-'0');
                    break;
                }
            }
        }else if (s[i]=='+'){
            op=1;
        }else if (s[i]=='-'){
            op=1;
            opAdd=false;
        }else if (s[i]=='='){
            op=2;
        }else if (s[i]=='?'){
            switch (op){
                case 0:{
                    x=INF;
                    break;
                }
                case 1:{
                    y=INF;
                    break;
                }
                case 2:{
                    z=INF;
                    break;
                }
            }
        }
    }
    if (opAdd){
        if (x==INF){
            printf("%d",z-y);
        }else if (y==INF){
            printf("%d",z-x);
        }else if (z==INF){
            printf("%d",x+y);
        }
    }else{
        if (x==INF){
            printf("%d",z+y);
        }else if (y==INF){
            printf("%d",x-z);
        }else if (z==INF){
            printf("%d",x-y);
        }
    }
    return 0;
}