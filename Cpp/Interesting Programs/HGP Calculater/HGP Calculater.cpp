#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
double hgp;
bool flag=true;
signed main(){
    printf("Welcome to use Hacknet Game Points (HGP) Calculater V1.4\n");
    printf("Written by BI3TKL with C++14(gcc 9)\n");
    printf("Tips: HGP Ϊһ�����Ժ����� Hacknet ��Ϸ�̶ȵ�ָ��, ���� 150 ��\n");
    printf("������Ϊ, ����� HGP>100 ʱ, ��� Hacknet ��ĺ�����\n");
    printf("======================================================================\n");
    do{
        printf("��������� Hacknet(����) ͨ�س̶�(0~100): ");
        scanf("%lld",&a);
        if (a<0 || a>100){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else{
            flag=true;
        }
    }while (!flag);
    do{
        printf("��������� Hacknet(DLC) ͨ�س̶�(0~100): ");
        scanf("%lld",&b);
        if (b<0 || b>100){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else{
            flag=true;
        }
    }while (!flag);
    do{
        printf("��������� Hacknet Extension(����) ��������(>=0): ");
        scanf("%lld",&c);
        if (c<0){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else if (c>15){
            c=15;
        }else{
            flag=true;
        }
    }while (!flag);
    do{
        printf("��������� Hacknet Extension(����) ��������(>=0): ");
        scanf("%lld",&d);
        if (d<0){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else if (d>10){
            d=10;
        }else{
            flag=true;
        }
    }while (!flag);
    do{
        printf("��������� Hacknet Extension ͨ������(>=0): ");
        scanf("%lld",&e);
        if (e<0){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else if (e>25){
            e=25;
        }else{
            flag=true;
        }
    }while (!flag);
    do{
        printf("��������� Hacknet ��Ŀ����(>=0): ");
        scanf("%lld",&f);
        if (f<0){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else if (f>30){
            f=30;
        }else{
            flag=true;
        }
    }while (!flag);
    do{
        printf("��������� Hacknet Extension ��Ŀ����(>=0): ");
        scanf("%lld",&g);
        if (g<0){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else if (g>90){
            g=90;
        }else{
            flag=true;
        }
    }while (!flag);
    do{
        printf("��������� Hacknet ��Ϸ�ڲ��������Ϥ�̶�(1~10): ");
        scanf("%lld",&h);
        if (h<1 || h>10){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else{
            flag=true;
        }
    }while (!flag);
    do{
        printf("������չ������(��1��0): ");
        scanf("%lld",&i);
        if (i!=0 && i!=1){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else{
            flag=true;
        }
    }while (!flag);
    do{
        printf("���Ƿ�������(��1��0): ");
        scanf("%lld",&j);
        if (j!=0 && j!=1){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else{
            flag=true;
        }
    }while (!flag);
    do{
        printf("���� Mod ��������(��1��0): ");
        scanf("%lld",&k);
        if (k!=0 && k!=1){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else{
            flag=true;
        }
    }while (!flag);
    do{
        printf("����¼�ƹ�������(��1��0): ");
        scanf("%lld",&l);
        if (l!=0 && l!=1){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else{
            flag=true;
        }
    }while (!flag);
    do{
        printf("������չ����Ա��(��1��0): ");
        scanf("%lld",&m);
        if (m!=0 && m!=1){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else{
            flag=true;
        }
    }while (!flag);
    do{
        printf("��������� Hacknet ��������(1~10, ����ȡ��): ");
        scanf("%lld",&n);
        if (n<1 || n>10){
            printf("���벻�Ϸ�! \n");
            flag=false;
        }else{
            flag=true;
        }
    }while (!flag);
    printf("======================================================================\n");
    hgp=a*1.0*0.2+b*1.0*0.2+c*1.0/15*100*0.2+d*1.0/10*100*0.2+e*1.0/25*100*0.2+f*1.0/6+g*1.0/10+h*1.0+i*6*1.0+j*4*1.0+k*5*1.0+l*3*1.0+m*3*1.0+n*1.0/2;
    printf("��� HGP Ϊ: %.1f/150\n",hgp);
    if (hgp>100){
        printf("Congratulation!!!\n");
        printf("You're a deeper Hacknet player than others!\n");
    }
    system("pause");
    return 0;
}