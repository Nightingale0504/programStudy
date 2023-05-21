/*
 * @Author: OperatorRosmontis capture1969@hotmail.com
 * @Date: 2023-03-05 13:18:09
 * @LastEditors: OperatorRosmontis capture1969@hotmail.com
 * @FilePath: \Program\C++\The escape of the watchmen\teotw.cpp
 * @Description: P1095 - 守望者的逃离
 * 心怀不惧，方能翱翔于天际
 * Copyright (c) 2023 by Boxuan Zhang, All Rights Reserved. 
 */
#include<iostream>
#include<cstdio>
#include<algorithm>
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