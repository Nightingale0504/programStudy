#include <iostream>
#include <cstring>
#include <cstdio>
#include <cmath>
#define int long long
using namespace std;
bool judge(int n){
    int m=(int) sqrt(n+0.5);
    for (int i=2; i<=m;i++)
        if (n%i==0) return false;
    return true;
}
signed main(){
    int n;
    while (true){
        puts("Enter the number=");
        n=0;
        string a;
        getline(cin,a);
        for (int i=0;i<a.size();i++){
            if(a[i]>='0' && a[i]<='9'){
                n*=10;
                n+=a[i]-'0';
            }
        }
        if (n==0) return 0;
        cout<<"Prime? ";
        if (n<2) puts("No!");
        else if (!judge(n)){
            puts("No!");
            if (n>40000000){
                puts("The number is too large!\n");
                continue;
            }
            cout<<n<<'=';
            bool first=true;
            for (int i=2; i<=n;i++){
                int k=0;
                while (!(n%i)){
                    k++;
                    n/=i;
                }
                if (k){
                    if (first){
                        cout<<i<<'^'<<k;
                        first=false;
                    }
                    else cout<<'*'<<i<<'^'<<k;
                }
            }
            cout<<endl;
        }
        else puts("Yes!");
        cout<<endl;
    }
}
