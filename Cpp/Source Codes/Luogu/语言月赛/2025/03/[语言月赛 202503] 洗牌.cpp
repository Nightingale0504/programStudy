#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
#include<cstring>
#include<string>
#include<queue>
#include<stack>
using namespace std;
#define int long long
int n,cnt;
string s,a;
queue<string> q,l,r;
stack<string> st;
signed main(){
	scanf("%lld",&n);
	cnt=2*n;
	getchar();
	for (int i=1;i<=cnt;i++){
		if (i==cnt){
			getline(cin,s);
		}else{
			getline(cin,s,',');
		}
		q.push(s);
	}
	for (int i=1;i<=n;i++){
		l.push(q.front());
		q.pop();
	}
	for (int i=1;i<=n;i++){
		r.push(q.front());
		q.pop();
	}
	cin>>a;
	for (int i=0;i<a.size();i++){
		if (a[i]=='L'){
			st.push(l.front());
			l.pop();
		}
		if (a[i]=='R'){
			st.push(r.front());
			r.pop();
		}
	}
	while (!st.empty()){
		cout<<st.top()<<"\n";
		st.pop();
		if (!st.empty()){
			st.pop();
		}
	}
	return 0;
}

