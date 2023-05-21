/*
 * @Author: OperatorRosmontis capture1969@hotmail.com
 * @Date: 2023-03-05 12:11:37
 * @LastEditors: OperatorRosmontis capture1969@hotmail.com
 * @FilePath: \Program\C++\Solve cubic equations with one variable\scewov.cpp
 * @Description: P1024 - 一元三次方程求解
 * 心怀不惧，方能翱翔于天际
 * Copyright (c) 2023 by Boxuan Zhang, All Rights Reserved. 
 */
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
double a,b,c,d;
double l,r,m,x1,x2;
int s;
/**
 * @description: 传入x求一元三次方程的右根
 * @param {double} x
 * @return {double} 方程的右根
 */
double solveEquation(double x){
    double solution=a*x*x*x+b*x*x+c*x+d;
    return solution;
}
int main(){
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    for (int i=-100;i<100;i++){
        l=i;
        r=i+1;
        x1=solveEquation(l);
        x2=solveEquation(r);
        if (!x1){
            printf("%.2lf ",l);
            s++;
        }
        if (x1*x2<0){
            while (r-l>=0.001){
                m=(l+r)/2;
                if (solveEquation(m)*solveEquation(r)<=0){
                    l=m;
                }else{
                    r=m;
                }
            }
            printf("%.2lf ",r);
            s++;
        }
        if (s==3){
            break;
        }
    }
    return 0;
}