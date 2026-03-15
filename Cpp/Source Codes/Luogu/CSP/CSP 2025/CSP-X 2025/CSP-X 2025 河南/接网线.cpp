#include<bits/stdc++.h>
using namespace std;
#define int long long
map<int,int> mmap;
int n,a[10];
string insort,outsort;
signed main(){
    cin>>insort>>outsort;
    for (int i=0;i<8;i++){
        for (int j=0;j<8;j++){
            if (insort[i]==outsort[j]){
                mmap[j+1]=i+1;
            }
        }
    }
    scanf("%lld",&n);
    for (int i=1;i<=n/8;i++){
        for (int j=1;j<=8;j++){
            scanf("%lld",&a[j]);
        }
        for (int j=1;j<=8;j++){
            printf("%lld ",a[mmap[j]]);
        }
    }
    return 0;
}