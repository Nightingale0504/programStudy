#include<bits/stdc++.h>
using namespace std;
vector<int> graph[2005];
int deep[2005];
int degree[2005];
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int ind=n;
	while(m--) {
		int to=0,from=1919810;
		bool ok[1005];
		for(int i=1; i<=n; i++) ok[i]=0;
		int num;
		scanf("%d",&num);
		for(int i=1; i<=num; i++) {
			int indx;
			scanf("%d",&indx);
			to=max(to,indx);
			from=min(from,indx);
			ok[indx]=1;
		}
		ind++;
		for(int i=from; i<=to; i++) {
			if(ok[i]) {
				graph[i].push_back(ind);
				++degree[ind];
			} else {
				graph[ind].push_back(i);
				++degree[i];
			}
		}
	}
	int ans=0;
	queue<int> deal;
	for(int i=1; i<=n; i++) if(!degree[i]) {
			deal.push(i);
			deep[i]=1;
		}
	while(deal.size()) {
		int indx=deal.front();
		ans=max(ans,deep[indx]);
		deal.pop();
		for(int i=0; i<graph[indx].size(); i++) {
			if(graph[indx][i]>n) deep[graph[indx][i]]=max(deep[graph[indx][i]],deep[indx]);
			else deep[graph[indx][i]]=max(deep[graph[indx][i]],deep[indx]+1);
			--degree[graph[indx][i]];
			if(!degree[graph[indx][i]]) deal.push(graph[indx][i]);
		}
	}
	cout<<ans;
	return 0;
}