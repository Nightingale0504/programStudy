#include<bits/stdc++.h> 
#include<set>
using namespace std;
set<int>s;
int n,a[105];
int main(){
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
        s.insert(a[i]);
    }
    printf("%d\n",s.size());
    while (!s.empty()){
        printf("%lld ",*s.begin());
        s.erase(s.begin());
    }
    return 0;
}
