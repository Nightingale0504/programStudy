#include<bits/stdc++.h> 
using namespace std;
#define int long long
const int maxN=1e6+5,maxM=2e3+5;
int n,m,a[maxN],ans[maxM],x,y;
int cnt;
int mmin=INT_MAX;
deque<int> que;
signed main(){
    scanf("%lld%lld",&n,&m);
    x=1;
    y=n;
    int mmin=n+1;
    for (int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    for (int i=1;i<=n;i++){
        if (ans[a[i]]==0){
            cnt++;
        }
        ans[a[i]]++;
        que.push_back(i);
        while (!que.empty() && ans[a[que.front()]]>1){
            ans[a[que.front()]]--;
            que.pop_front();
        }
        if (cnt==m){
            if (que.size()<mmin){
                mmin=que.size();
                x=que.front();
                y=que.back();
            }
        }
    }
    printf("%lld %lld",x,y);
	return 0;
}