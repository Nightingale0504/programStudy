#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=2e5+10;
int n,a[maxN];
map<int,int> mmap;
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=2*n;i++){
        scanf("%lld",&a[i]);
        mmap[a[i]]+=i;
    }
    for (int i=1;i<=2*n;i++){
        printf("%lld ",mmap[a[i]]-i);
    }
    return 0;
}