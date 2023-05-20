#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring> 
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	string s;
    int n,i,j;
    cin>>n;
    cin>>s;
    for(i=0;i<s.size();++i){
        for(j=1;j<=n;++j){
            ++s[i];
            if(s[i]>'z'){
            	s[i]='a';
			}
        }
    }
    cout<<s;
	return 0;
}

