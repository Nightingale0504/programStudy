#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cctype>
#include<vector>
#include<queue>
using namespace std;
#define ll long long
#define rg register
char F[200];
const int N=5e3+2;
const int mod=80112002;
int n,m;
int in[N],out[N];
vector<int>nei[N];
queue<int>q;
int ans;
int num[N];
inline int read(){
	int X=0,w=0;
	char ch=0;
	while (!isdigit(ch)){
		w |= ch == '-';
		ch=getchar();
	}
	while (isdigit(ch)){
		X=(X<<3)+(X<<1)+(ch^48);
		ch=getchar();
	}
	return w ? -X:X;
}
inline void write(int x){
	if (x==0){
		putchar('0');
		return;
	}
	int tmp=x>0 ? x:-x;
	int cnt=0;
	if (x<0){
		putchar('-');
	}
	while (tmp>0){
		F[cnt++]=tmp%10+'0';
		tmp/=10;
	}
	while (cnt>0){
		putchar(F[--cnt]);
	}
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("tracker.in","r",stdin);
		freopen("tracker.out","w",stdout);
	#endif
	n=read();
	m=read();
	for (rg int i=1;i<=m;i++){
		int x=read();
		int y=read();
		++in[y];
		++out[x];
		nei[x].push_back(y);
	}
	for (rg int i=1;i<=n;i++){
		if (!in[i]){
			num[i]=1;
			q.push(i);
		}
	}
	while (!q.empty()){
		int tot=q.front();
		q.pop();
		int len=nei[tot].size();
		for (rg int i=0;i<len;i++){
			int next=nei[tot][i];
			--in[next];
			num[next]=(num[next]+num[tot])%mod;
			if (in[next]==0){
				q.push(nei[tot][i]);
			}
		}
	}
	for (rg int i=1;i<=n;i++){
		if (!out[i]){
			ans=(ans+num[i])%mod;
		}
	}
	write(ans);
	return 0;
}

