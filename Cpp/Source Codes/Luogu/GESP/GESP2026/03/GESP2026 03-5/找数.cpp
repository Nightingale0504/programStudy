#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxN=1e5+5;
int n,m,cnt,tmp;
map<int,int> mmap;
signed main(){
    scanf("%lld%lld",&n,&m);
    for (int i=1;i<=n;i++){
        scanf("%lld",&tmp);
        mmap[tmp]++;
    }
    for (int i=1;i<=m;i++){
        scanf("%lld",&tmp);
        if (mmap[tmp]!=0){
            cnt++;
        }
    }
    printf("%lld",cnt);
    return 0;
}