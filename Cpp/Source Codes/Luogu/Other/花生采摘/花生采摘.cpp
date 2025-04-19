#include<bits/stdc++.h> 
#include<map>
#include<cctype>
using namespace std;
#define int long long
int n,m,k,a[23][23],w,s;
map<int,pair<int,int> >c;
priority_queue<int> q;
inline int read(){
    int x=0;
	bool w=0;
	char c=getchar();
    while (!isdigit(c)){
    	w|=c=='-';
		c=getchar();
	}
    while (isdigit(c)){
    	x=(x<<1)+(x<<3)+(c^48);
		c=getchar();
	}
    return w ? -x : x;
}
inline void write(int x){
    if (x<0){
    	x=-x,putchar('-');
	}
    if (x>9){
    	write(x/10);
	}
    putchar(x%10^48);
}
signed main(){
	n=read(),m=read(),k=read();
	for (register int i=1;i<=n;++i){
		for (register int j=1;j<=m;++j){
			a[i][j]=read();
			c[a[i][j]]=make_pair(i,j);
			q.push(a[i][j]);
		}
	}
	int j=q.top();q.pop();
	int x=c[j].first;
	int y=c[j].second;
	w+=x+1;
	while (w+x<=k){
		s+=j;
		if (q.empty()){
			break;
		}
		j=q.top();
		q.pop();
		w+=abs(c[j].first-x)+abs(c[j].second-y)+1;
		x=c[j].first;
		y=c[j].second;
	}
	write(s);
	return 0;
}

