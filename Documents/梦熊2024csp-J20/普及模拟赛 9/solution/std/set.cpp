#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,i,t,x;
char c;
map<int,int> f,a;
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin>>n;
    while(n--){
        cin>>c>>x;
        if(c=='+') f[x]++;
        else{
            if(!a[x]) t=1;
            else t=a[x];
            for(i=t;;i++)
                if(!f[i*x]){
                    cout<<i*x<<"\n",a[x]=i;
                    break;
                }
        }
    }
    return 0;
}
/*
暴力的角度去思考
unordered_map/map  S存储哪些数出现了 O(1)

询问的时候,x

 S[x] 在不在
 S[2*x]
 S[3*x] 
 
假设上一次问x，答案为kx，那么下一次可以直接从kx继续找

kx,kx+x,kx+2x,....

一个元素x，它会被哪些询问问到 因数 

 

*/
