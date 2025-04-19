#include<bits/stdc++.h> 
using namespace std;
#define int long long
int n;
char a[120],b[120];
signed main(){
    scanf("%d",&n);
    cin>>a>>b;
    for(int i=0,t;i<n;i++){
    	t=a[i]-b[i];
    	if (t<0){
    		cout<<-1;
    		return 0;
		}
	}
    cout<<b;
	return 0;
}

