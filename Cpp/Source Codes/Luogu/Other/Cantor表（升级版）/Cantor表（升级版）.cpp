#include<bits/stdc++.h> 
using namespace std;
#define int long long
typedef struct fraction{
    long first,last;
} f;
inline long gcd(long a,long b)
{
    return b==0 ? a : gcd(b,a%b);
}
f reduce(f old){
    long i=gcd(old.first,old.last);
    old.first/=i;
    old.last/=i;
    return old;
}
f operator+(f a,f b){
    if (a.last==b.last){
        a.first+=b.first;
        return a;
    }
    else{
        a.last*=b.last;
        a.first+=b.first;
        a=reduce(a);
        return a;
    }
}
f operator-(f a,f b){
    if(a.last==b.last){
        a.first==b.first;
        return a;
    }
    else{
        a.last*=b.last;
        a.first-=b.first;
        a=reduce(a);
        return a;
    }
}
f operator*(f a,f b){
    a.last*=b.last;
    a.first*=b.first;
    a=reduce(a);
    return a;
}
f operator/(f a,f b){
    a.last*=b.first;
    a.first*=b.last;
    a=reduce(a);
    return a;
}
f toFractionOf(char* in){
    long a=0,b=0,count=0,ocount;
    char iinF=' ';
    f ainF;
    do {
        iinF=in[count];
        a*=10;
        a+=iinF-'0';
        count+=1;
    } while (in[count]!='/' && count<strlen(in));
    if (count==strlen(in)){
        ainF.first=a;
        ainF.last=1;
        return ainF;
    }
    ocount=count+1;
    count=0;
    do {
        iinF=in[ocount];
        b*=10;
        b+=iinF-'0';
        count+=1;
        ocount+=1;
    } while (ocount<strlen(in));
    ainF.first=a;
    ainF.last=b;
    return ainF;
}
double toFloatOf(f in){
    return in.last!=0 ? double(in.first)/in.last : (static_cast<void>(perror("0 CAN NOT BE DIVISOR\n\n\n\n\n\n\n\n\n\n")),0 );
}
f n1,n2;
char a[1005],b[1005];
signed main(){
//	#ifndef ONLINE_JUDGE
//		freopen("nightingale.in","r",stdin);
//		freopen("nightingale.out","w",stdout);
//	#endif
    scanf("%s%s",a,b);
    n1=toFractionOf(a);
    n2=toFractionOf(b);
    n1=n1*n2;
    printf("%lld %lld",n1.last,n1.first);
	return 0;
}

