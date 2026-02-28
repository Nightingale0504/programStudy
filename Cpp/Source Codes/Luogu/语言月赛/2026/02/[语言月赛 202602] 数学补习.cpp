#include<bits/stdc++.h>
using namespace std;
#define int long long
int finalX,finalY,z,cnt;
signed main(){
    scanf("%lld%lld%lld",&finalX,&finalY,&z);
    for (int i=1;i<100;i++){
        for (int j=1;j<100;j++){
            int x=i;
            int y=j;
            int c=0;
            while (c<z){
                if ((x+y)%2==1){
                    x-=y%x;
                }else{
                    y-=x%y;
                }
                if (x<c){
                    x+=y/2+1;
                }
                if (y<c){
                    y+=x/2+1;
                }
                c++;
            }
            if (x==finalX && y==finalY && i>=10 && j>=10){
                cnt++;
            }
        }
    }
    printf("%lld",cnt);
    return 0;
}