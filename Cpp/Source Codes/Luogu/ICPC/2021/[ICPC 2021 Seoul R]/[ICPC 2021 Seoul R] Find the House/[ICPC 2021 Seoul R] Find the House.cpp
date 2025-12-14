#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=1e6+5;
struct node{
    int i,k;
    char j;
    bool flag;
}a[maxN];
int n,pos;
bool f=true;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        int x,z;
        char y;
        scanf("%lld %c %lld",&x,&y,&z);
        a[i].i=x;
        a[i].j=y;
        a[i].k=z;
        a[i].flag=false;
    }
    scanf("%lld",&pos);
    while (f){
        f=false;
        for (int i=1;i<=n;i++){
            if (!a[i].flag && a[i].i==pos){
                f=true;
                a[i].flag=true;
                if (a[i].j=='L'){
                    pos-=a[i].k;
                }else{
                    pos+=a[i].k;
                }
                break;
            }
        }
    }
    printf("%lld\n",pos);
    return 0;
}