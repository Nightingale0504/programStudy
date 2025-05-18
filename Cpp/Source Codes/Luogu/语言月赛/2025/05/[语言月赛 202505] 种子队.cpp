#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e6+5,maxK=1e4+5;
int n,k,num;
int seed[maxK],group[maxK][maxK];
bool flag=true;
signed main(){
    scanf("%lld%lld",&n,&k);
    num=n/k;
    for (int i=1;i<=k;i++){
        scanf("%lld",&seed[i]);
    }
    for (int i=1;i<=k;i++){
        for (int j=1;j<=num;j++){
            scanf("%lld",&group[i][j]);
        }
    }
    for (int i=1;i<=k;i++){
        int x=0;
        for (int j=1;j<=num;j++){
            for (int z=1;z<=k;z++){
                if (group[i][j]==seed[z]){
                    x++;
                }
            }
        }
        if (x!=1){
            flag=false;
            break;
        }
    }
    if (flag){
        printf("\"MiaoW\"");
    }else{
        printf("\\QAQ/");
    }
    return 0;
}