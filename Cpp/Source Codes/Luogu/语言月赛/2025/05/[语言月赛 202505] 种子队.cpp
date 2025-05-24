#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e6+5,maxK=1e3+5;
int n,k,num,cnt,s;
int seed[maxK];
bool flag=true;
signed main(){
    scanf("%lld%lld",&n,&k);
    num=n/k;
    for (int i=1;i<=k;i++){
        scanf("%lld",&seed[i]);
    }
    for (int i=1;i<=k;i++){
        cnt=0;
        for (int j=1;j<=num;j++){
            scanf("%lld",&s);
            for (int z=1;z<=k;z++){
                if (s==seed[z]){
                    cnt++;
                    break;
                }
            }
        }
        if (cnt!=1){
            flag=false;
        }
    }
    if (flag){
        printf("\"MiaoW\"");
    }else{
        printf("\\QAQ/");
    }
    return 0;
}