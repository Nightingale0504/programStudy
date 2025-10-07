#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define lx first
#define ly second
const int maxn=2e5+10;
int n,m;
pii a[maxn];int num[maxn];
int ans[maxn];
inline int read(){
    int s=0,w=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){s=s*10+ch-'0';ch=getchar();}
    return s*w;
}
signed main(){
	freopen("taxi.in","r",stdin);
	freopen("taxi.out","w",stdout); 
    n=read(),m=read();
    for(int i=1;i<=n+m;++i)a[i].lx=read();
    for(int i=1;i<=n+m;++i)a[i].ly=read();
    // sort(a+1,a+n+m+1);
    int last=-1;
    for(int i=1;i<=n+m;++i){
        if(a[i].ly!=0)last=i;
        else num[i]=last;
    }
    last=n+m+1;
    for(int i=n+m;i>=1;--i){
        if(a[i].ly!=0)last=i;
        else{
            if(num[i]==-1)ans[last]++;
            else if(last==n+m+1)ans[num[i]]++;
            else {
                // ans[min(i-num[i],last-i)]++; 
                if(a[i].lx-a[num[i]].lx<=a[last].lx-a[i].lx)ans[num[i]]++;
                else ans[last]++;//这里绝对不能直接用 i,num[i],必须要用 a[i]取地址。
            }
        }
    }
    for(int i=1;i<=n+m;++i){
        if(a[i].ly!=0)cout << ans[i] << " ";
    }
    return 0;
}
