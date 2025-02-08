#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int x,x1,a[10001],b[10001],change,t=1,i,j,s,flag1,flag2,n1,n2,flag;
int mscore(int a,int b)
{
    return a>b;
}
int main(){
	scanf("%d%d%d",&x,&a[0],&b[0]);
    while(a[t-1]!=-1)
    {
    scanf("%d%d",&a[t],&b[t]);
    t++;
    }
    t--;
    sort(a,a+t);
    sort(b,b+t,mscore);
    scanf("%d",&change);
    s=t;
    for(i=1;i<t;i++)
    if(a[i]-a[i-1]>1)
    for(j=a[i-1]+1;j<a[i];j++)
    {
        a[s]=j;
        b[s]=b[i-1]-(b[i-1]-b[i])/(a[i]-a[i-1])*(j-a[i-1]);
        s++;
    }
    sort(a,a+s);
    sort(b,b+s,mscore);
    for(i=1;i<s;i++)
    if(a[i]==x)
    {
        x1=b[i];
        flag=1;
    }
    if(flag==0)
    x1=b[s-1]-(x-a[s-1])*change;
    for(i=0;;i++)
    {
        flag1=0;
        flag2=0;
        n1=(x-a[0]+i)*x1;
        n2=(x-a[0]-i)*x1;
        for(j=1;;j++)
        {
            if(j>=s)
            {
            b[j]=b[j-1]-change;
            a[j]=a[j-1]+1;            
            }
            if(b[j]<=0)break;
            if(n1<(a[j]-a[0]+i)*b[j])flag1=1;
            if(n2<(a[j]-a[0]-i)*b[j]||n2<=0)flag2=1;   
        }
        if(flag1==0&&flag2==1)break;
        else if(flag1==1&&flag2==0)break;
        else if(flag1==0&&flag2==0)break;
        else if(i==b[0]*10){flag1=-2;break;}
    }
    if(flag1==1&&flag2==0)printf("-%d",i);
    else if(flag1==0&&flag2==1)printf("%d",i);
    else if(flag1==0&&flag2==0)printf("%d",i);
    else if(flag1==-2)printf("NO SOLUTION");
	return 0;
}

