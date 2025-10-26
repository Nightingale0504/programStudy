#include<bits/stdc++.h>
#define int long long
#define ull unsigned long long
using namespace std;
const int maxN=1e6+5;
string s;
set<ull> st;
int n;
inline ull hashing(string str){
    int sum=0;
    for (int i=1;i<s.length();i++){
        sum=sum*13331+s[i];
    }
    return sum;
}
signed main(){
    scanf("%lld",&n);
    while (n--){
        cin>>s;
        st.insert(hashing(s));
    }
    printf("%lld",st.size());
    return 0;
}