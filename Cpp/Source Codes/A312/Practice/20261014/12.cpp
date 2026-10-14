#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[3][3]={{12, 23, 34}, {45, 56, 67}, {78, 89, 91}};
int b;
signed main(){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            b+=a[i][j];
        }
    }
    printf("%lld\n",b);
    return 0;
}