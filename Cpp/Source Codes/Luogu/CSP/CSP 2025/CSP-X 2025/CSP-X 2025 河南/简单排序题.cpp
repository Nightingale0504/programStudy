#include<bits/stdc++.h>
using namespace std;
#define int long long
const int maxN=5e5+5;
struct node{
    int id,val,freq;
};
map<int,int> mmap;
vector<node> v;
int n,x,a[maxN];
inline bool cmp(node a,node b){
    if (a.freq==b.freq){
        return a.id<b.id;
    }
    return a.freq>b.freq;
}
signed main(){
    scanf("%lld",&n);
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        mmap[a[i]]++;
    }
    for (int i=1;i<=n;i++){
        node t={id:i,val:a[i],freq:mmap[a[i]]};
        v.push_back(t);
    }
    sort(v.begin(),v.end(),cmp);
    for (int i=0;i<n;i++){
        printf("%lld ",v[i].val);
    }
    return 0;
}