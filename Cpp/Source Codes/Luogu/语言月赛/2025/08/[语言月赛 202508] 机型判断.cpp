#include<bits/stdc++.h>
using namespace std;
#define int long long
char x,y;
int z;
signed main(){
    cin>>x>>y>>z;
    if (x=='A'){
        if (y=='N'){
            printf("A320");
        }else if (y=='W'){
            if (z==2){
                printf("A350");
            }else if (z==4){
                printf("A380");
            }
        }
    }else if (x=='B'){
        if (y=='N'){
            printf("B737");
        }else if (y=='W'){
            if (z==4){
                printf("B747");
            }else if (z==2){
                printf("B787");
            }
        }
    }else if (x=='C'){
        printf("C919");
    }
    return 0;
}