#include<bits/stdc++.h> 
using namespace std;
#define ll long long
const int KR=1e6+10,SZ=3;
ll n,k,P;
ll kCnt=0;
ll f[6*KR],len[KR],seq[KR],vis[KR];
bool flag;
ll GCD(ll a,ll b){
    if (!b){
        return 0;
    }
    return GCD(b,a%b);
}
void exGCD(ll a,ll b,ll &x,ll &y){
    if (!b){
        x=1;
        y=0;
        return;
    }
    exGCD(b,a%b,x,y);
    ll t=x;
    x=y;
    y=t-a/b*y;
}
ll getInv(ll a,ll P){
    if (GCD(a,P)!=1){
        return -1;
    }
    ll x,y;
    exGCD(a,P,x,y);
    return (x%P+P)%P;
}
struct Matrix{
    ll o[SZ+1][SZ+1];
    Matrix(){
        memset(o,0,sizeof(o));
    }
    Matrix operator * (const Matrix &x) const{
        Matrix ret;
        for (int i=1;i<=SZ;i++){
            for (int j=1;j<=SZ;j++){
                for (int k=1;k<=SZ;k++){
                    ret.o[i][j]=(ret.o[i][j]+o[i][k]*x.o[k][j]+P)%P;
                }
            }
        }
        return ret;
    }
}mat,tr1,tr2,tr;
Matrix quickPower(Matrix a,ll b){
    Matrix ret;
    for (int i=1;i<=SZ;i++){
        ret.o[i][i]=1;
    }
    while (b){
        if (b&1){
            ret=ret*a;
        }
        a=a*a;
        b>>=1;
    }
    return ret;
}
int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("enforcer.in","r",stdin);
    //     freopen("enforcer.out","w",stdout);
    // #endif
    scanf("%lld%lld%lld",&n,&k,&P);
    if (n==1 || n==2){
        printf("1\n");
        return 0;
    }
    memset(len,999999,sizeof(len));
    f[1]=f[2]=1;
    for (ll i=3;;i++){
        f[i]=(f[i-1]+f[i-2])%k;
        if (f[i]%k==1 && len[1]>1e18){
            len[1]=i;
        }
        if (f[i]==1 && f[i-1]==1){
            break;
        }
        ll inv=getInv(f[i],k);
        if (inv!=-1){
            len[inv%k]=min(len[inv%k],i);
        }
    }
    ll now=1,tot=0;
    while (1){
        seq[++kCnt]=now;
        vis[now]=kCnt;
        if (len[now]>1e18){
            for (int i=1;i<kCnt;i++){
                tot+=len[seq[i]];
            }
            flag=1;
            break;
        }
        now=(now*f[len[now]-1])%k;
        if (vis[now]){
            for (int i=1;i<vis[now];i++){
                tot+=len[seq[i]];
            }
            break;
        }
    }
    mat.o[1][1]=mat.o[1][3]=1;
    tr1.o[1][1]=tr1.o[1][2]=tr1.o[2][1]=tr1.o[3][3]=1;
    tr2.o[1][1]=tr2.o[1][2]=tr2.o[2][1]=tr2.o[3][3]=1;
    tr2.o[3][1]=-1;
    if (n<=tot){
        len[1]--;
        n--;
        for (int i=1;i<vis[now];i++){
            if (n>=len[seq[i]]){
                mat=mat*quickPower(tr1,len[seq[i]]-1)*tr2;
                n-=len[seq[i]];
            }else{
                mat=mat*quickPower(tr1,n);
                printf("%lld\n",mat.o[1][1]);
                return 0;
            }
        }
    }else{
        len[1]--;
        n-=tot;
        for (int i=1;i<vis[now];i++){
            mat=mat*quickPower(tr1,len[seq[i]]-1)*tr2;
        }
        if (flag){
            mat=mat*quickPower(tr1,n);
            printf("%lld\n",mat.o[1][1]);
        }else{
            ll loopLen=0;
            for (ll i=1;i<=SZ;i++){
                tr.o[i][i]=1;
            }
            for (ll i=vis[now];i<=kCnt;i++){
                tr=tr*quickPower(tr1,len[seq[i]]-1)*tr2;
                loopLen+=len[seq[i]];
            }
            ll tmp=n/loopLen;
            mat=mat*quickPower(tr,tmp);
            n=n-loopLen*tmp;
            for (ll i=vis[now];i<=kCnt;i++){
                if (n>=len[seq[i]]){
                    mat=mat*quickPower(tr1,n);
                    printf("%lld\n",mat.o[1][1]);
                    return 0;
                }
            }
        }
    }
    return 0;
}