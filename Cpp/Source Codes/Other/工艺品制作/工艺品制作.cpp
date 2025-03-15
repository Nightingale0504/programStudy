#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int w,x,h,ans,q;
int a[21][21][21];
int main(){
	scanf("%d%d%d%d",&w,&x,&h,&q);
	while (q--){
        int x1,y1,z1,x2,y2,z2;
        scanf("%d%d%d%d%d%d",&x1,&y1,&z1,&x2,&y2,&z2);
        for (int i=min(x1,x2);i<=max(x1,x2);i++){
            for (int j=min(y1,y2);j<=max(y1,y2);j++){
                for (int k=min(z1,z2);k<=max(z1,z2);k++){
                    a[i][j][k]=1;
                }
            }
        }
    }
    for (int i=1;i<=w;i++){
        for (int j=1;j<=x;j++){
            for (int k=1;k<=h;k++){
                if (a[i][j][k]==0){
                    ans++;
                }
            }
        }
    }
    printf("%d\n",ans);
	return 0;
}

