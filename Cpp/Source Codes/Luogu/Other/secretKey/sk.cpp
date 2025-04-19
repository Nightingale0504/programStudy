#include<bits/stdc++.h> 
using namespace std;
#define re register
#define ll long long
const int maxN=2e7+5;
int p[maxN],pre[maxN],tax[maxN],np[maxN],id[maxN];
int seed,n,k,S,tot,now,ans1,ans2,ans3,beg;
inline int getRand(){
    seed=((seed*12321)^9999)%32768;
    return seed;
}
void generateData(){
    scanf("%d%d%d",&k,&seed,&S);
    int t=0,n=k*2+1;
    for (int i=1;i<=n;i++){
        p[i]=(getRand()/128)%2;
        t+=p[i];
    }
    int i=1;
    while (t>k){
        while (p[i]==0){
            i++;
        }
        p[i]=0;
        t--;
    }
    while (t<k){
        while (p[i]==1){
            i++;
        }
        p[i]=1;
        t++;
    }
}
inline void calc(int pos){
    if (tot==0){
        ans1=id[pos];
    }
    if (tot==S){
        ans2=id[pos];
    }
    if (tot==k-S){
        ans3=id[pos];
    }
    if (ans1 && ans2 && ans3){
        printf("%d\n%d\n%d\n",ans1,ans2,ans3);
        exit(0);
    }
}
int main(){
    generateData();
    for (re int i=1;i<=n;i++){
        if (!p[i]){
            beg=i;
            break;
        }
    }
    for (re int i=1;i<=n;i++){
        id[i]=beg;
        np[i]=p[beg++];
        if (beg>n){
            beg=1;
        }
    }
    for (re int i=2;i<=n;i++){
        pre[i]=(pre[i-1])+(np[i]?1:-1);
    }
    for (re int i=2;i<=n;i++){
        if (np[i]){
            tax[pre[i]+k]++;
        }
    }
    for (re int i=k+1;i<=k+k;i++){
        tot+=tax[i];
    }
    calc(1);
    now=k;
    for (re int i=2;i<=n;i++){
        if (np[i]){
            now++;
            tot-=tax[now];
            tax[pre[i]+k]--;
            tax[pre[i]+k-1]++;
        }else{
            tot+=tax[now];
            now--;
            calc(i);
        }
    }
    return 0;
}