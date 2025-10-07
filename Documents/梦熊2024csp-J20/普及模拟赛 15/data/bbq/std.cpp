#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int n,q,l,r;
string s;

int main(){
    freopen("bbq10.in","r",stdin);
    freopen("bbq10.out","w",stdout);
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,q;
    string s;
    cin>>n>>q>>s;
    vector<int> d1(n);
    for(int i = 0, l = 0,r = -1; i < n; i++){
        int k = (i > r) ? 1 : min(d1[l + r - i],r - i + 1);
        while(0 <= i - k && i + k < n && s[i - k] == s[i + k]) k++;
        d1[i] = k--;
        if(i + k > r){
            l = i - k;
            r = i + k;
        }
    }
    while(q--){
        cin>>l>>r;
        l--,r--;
        int mid = (l + r)/2;
        if((r - l + 1) % 2 == 1 ) {
            if(r - l + 1 <= 2 * d1[mid] - 1) cout<<"Cow\n";
            else cout<<"Guan\n";
        }
        else 
            cout<<"Cow\n";
    }
    return 0;
}
