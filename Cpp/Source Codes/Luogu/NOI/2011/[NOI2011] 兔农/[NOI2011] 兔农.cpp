#include<bits/stdc++.h>
#define INF 2000000000
using namespace std;
typedef long long ll;
int read(){
    int f=1,x=0;char c=getchar();
    while(c<'0'||c>'9'){if(c=='-')f=-f;c=getchar();}
    while(c>='0'&&c<='9')x=x*10+c-'0',c=getchar();
    return f*x;
}
ll n,k,p,ans;
ll minlen[1000005],block[1000005][3],vis[1000005]={0},top=0;
ll sum[1000005]={0};
ll FIB[3][3]={
    {0,1,0},
    {1,1,0},
    {0,0,1}
},MINUS[3][3]={
    {1,0,0},
    {0,1,0},
    {0,-1,1}
};
struct Mat{
    ll dat[3][3];
    int r,c;
    Mat(){
        memset(dat,0,sizeof(dat));
    }
};
Mat Minus,Fib;
Mat mul(Mat &a,Mat &b,ll Mod){
    Mat newed;
    newed.r=a.r,newed.c=b.c;
    int i,j,k;ll t;
    for(i=0;i<a.r;i++)
        for(j=0;j<b.c;j++){
            for(t=0,k=0;k<a.c;k++)t+=(a.dat[i][k])*(b.dat[k][j]),t%=Mod;
            newed.dat[i][j]=t%Mod;
        }
    return newed;
}
Mat Pow(Mat a,ll p,ll Mod){
    Mat E;E.r=E.c=a.c;
    int i;
    for(i=0;i<a.c;i++)
        E.dat[i][i]=1;
    while(p){
        if(p&1)E=mul(E,a,Mod);
        a=mul(a,a,Mod),p>>=1;
    }
    return E;
}
ll extgcd(ll a,ll b,ll &x,ll &y){
    if(!b){
        x=1,y=0;
        return a;
    }
    ll d=extgcd(b,a%b,y,x);
    y-=(a/b)*x;
    return d;
}
void setfib(Mat &mat){
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            mat.dat[i][j]=FIB[i][j];
    mat.r=mat.c=3;
}
void setminus(Mat &mat){
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            mat.dat[i][j]=MINUS[i][j];
    mat.r=mat.c=3;
}
void init(){
    scanf("%lld%lld%lld",&n,&k,&p);
    memset(minlen,-1,sizeof(minlen));
    memset(vis,-1,sizeof(vis));
    ll fib1=1,fib2=1,fib3,t;
    for(ll i=3;i<=6*k;i++){
        fib3=(fib1+fib2),t=fib3%k;
        if(t==1&&fib2==1&&fib1==0)break;
        if(minlen[t]<0)minlen[t]=i;
        fib1=fib2,fib2=t;
    }
    MINUS[2][1]=p-1;
    setfib(Fib),setminus(Minus);
}
void solve(){
    ll x=1,dx,dy,d,len;
    ll cyc=-1;
    Mat Ori,Plu,res;
    Ori.r=1,Ori.c=3;
    Ori.dat[0][0]=Ori.dat[0][2]=1,
    Ori.dat[0][1]=0;
    for(;;){
        d=extgcd(x,k,dx,dy);
        if(d!=1)
            break;
        else{
            dx=(dx+k)%k,len=minlen[dx];
            if(len==-1)
                break;
            block[top][0]=x,block[top][1]=len;
            Plu=Pow(Fib,len-1,k);
            res=mul(Ori,Plu,k);
            block[top++][2]=(x*res.dat[0][1])%k;
            x=block[top-1][2];
            sum[top]=sum[top-1]+len;
            if(vis[x]>=0){
                cyc=vis[x]+1;
                break;
            }
            vis[x]=top-1;
        }
    }
    if(cyc==-1){
        for(ll i=0;i<top&&n;i++){
            len=block[i][1];
            Plu=Pow(Fib,min(n,len),p);
            Ori=mul(Ori,Plu,p);
            if(n<len){
                n=0;break;
            }
            n-=len;
            Ori=mul(Ori,Minus,p);
        }
        if(n)
            Plu=Pow(Fib,n,p),
            Ori=mul(Ori,Plu,p);
        ans=Ori.dat[0][1];
    }else{
        for(ll i=0;i<cyc&&n;i++){
            len=block[i][1];
            Plu=Pow(Fib,min(n,len),p);
            Ori=mul(Ori,Plu,p);
            if(n<len){
                n=0;break;
            }
            n-=len;
            Ori=mul(Ori,Minus,p);
        }
        if(!n){
            ans=Ori.dat[0][1];goto build_ans;
        }
        d=n/(sum[top]-sum[cyc]),n%=(sum[top]-sum[cyc]);
        if(d){
            for(ll i=0;i<3;i++)
                for(ll j=0;j<3;j++)
                    Plu.dat[i][j]=(i==j)?1:0;
            Plu.r=Plu.c=3;
            for(ll i=cyc;i<top;i++)
            	res=Pow(Fib,block[i][1],p),res=mul(res,Minus,p),Plu=mul(Plu,res,p);
            Plu=Pow(Plu,d,p),Ori=mul(Ori,Plu,p);
        }
        for(ll i=cyc;i<top&&n;i++){
            len=block[i][1];
            Plu=Pow(Fib,min(n,len),p);
            Ori=mul(Ori,Plu,p);
            if(n<len){
                n=0;break;
            }
            n-=len;
            Ori=mul(Ori,Minus,p);
        }
        ans=Ori.dat[0][1];
    }
    build_ans:
    printf("%lld\n",ans);
}
int main(){
    init();
    solve();
    return 0;
}
