#include<bits/stdc++.h>
#define int long long
using namespace std;
double a[]={78.5,92,66,81,88.5},avg,sum;
signed main(){
    for (int i=0;i<5;i++){
        sum+=a[i];
    }
    avg=sum/5;
    printf("%.1f %.1f\n",sum,avg);
    return 0;
}