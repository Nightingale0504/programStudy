#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
double a,b,c,d;
double l,r,m,x1,x2;
int s;
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
