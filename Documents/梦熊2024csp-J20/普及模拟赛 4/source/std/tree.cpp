#include<bits/stdc++.h>
using namespace std;
struct edge {
	int to;
	long long val;
};
int n;
long long ans=0;
bool used[1000005];
int size[1000005];
vector<edge> aftgraph[1000005];
int dfs(int lo,int fa) {
	size[lo]=1;
	for(int i=0; i<aftgraph[lo].size(); i++) {//�������к��ӽڵ� 
		if(aftgraph[lo][i].to==fa) continue;
		size[lo]+=dfs(aftgraph[lo][i].to,lo);//lo����ڵ��������С 
		ans+=abs(n-2*size[aftgraph[lo][i].to])*aftgraph[lo][i].val;//(n-2*������С)*��Ȩ 
	}
	size[lo]++;
	return size[lo];
}
int main() {
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout); 
	cin>>n;
	for(int i=1; i<=n-1; i++) {
		int a,b,c;
		scanf("%d%d%d",&a,&b,&c);
		edge indx;
		indx.to=a;
		indx.val=c;
		aftgraph[b].push_back(indx);
		indx.to=b;
		aftgraph[a].push_back(indx);
	}
	dfs(1,0);
	cout<<ans;
	return 0;
}
//���ı���DFS�����Ĵ洢 
