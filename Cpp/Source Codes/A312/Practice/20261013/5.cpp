#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[]={55, 80, 42, 91, 59, 73, 66};
int cnt;
signed main(){
    for (auto i:a){
        if (i<60){
            cnt++;
        }
    }
    printf("%lld\n",cnt);
    return 0;
}