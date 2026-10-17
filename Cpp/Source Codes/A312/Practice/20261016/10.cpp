#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[]={11, 22, 33, 44, 55, 66},n;
signed main(){
    scanf("%lld",&n);
    for (int i=0;i<n;i++){
        if (a[i]==n){
            printf("%lld\n",i);
        } else {
            printf("No exist\n");
        }
    }
    return 0;
}