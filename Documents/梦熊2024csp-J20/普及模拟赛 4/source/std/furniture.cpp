#include<bits/stdc++.h>
#define ll long long
#define db double
#define mp make_pair
#define fi first
#define se second
#define pii pair<int,int>
using namespace std;
int read(){
	int sum=0,f=1;char st=getchar();
	while(st<'0'||st>'9'){
		if(st=='-')f=-1;
		st=getchar();
	}
	while('0'<=st&&st<='9'){
		sum=(sum<<3)+(sum<<1)+st-'0';
		st=getchar();
	}
	return sum*f;
}
const int maxn=5010;
int n,A,B,C;
struct qqq{
	int a,b,c;
}a[maxn];
bool paix(qqq s1,qqq s2){//按b-a的权值做排序 
	return s1.b-s1.a<s2.b-s2.a;
}
ll f[maxn][maxn];
int main(){
	freopen("furniture.in","r",stdin);
	freopen("furniture.out","w",stdout);
	cin>>n>>A>>B>>C;
	for(int i=1;i<=n;++i)
		a[i].a=read(),a[i].b=read(),a[i].c=read();
	sort(a+1,a+1+n,paix);
	//先排序 
	memset(f,0x7f,sizeof(f));
	f[0][0]=0;//f[i][j]表示前i家排好序后的商店，其中选j家装饰的最小代价 
	for(int i=1;i<=n;++i){
		for(int j=0;j<=min(i,C);++j){
			//第一种情况是选非装饰 
			if(i-j<=B)f[i][j]=f[i-1][j]+a[i].b;
			else f[i][j]=f[i-1][j]+a[i].a;
			//第二种情况选的 
			if(j)f[i][j]=min(f[i][j],f[i-1][j-1]+a[i].c);
			// cout<<"i="<<i<<" j="<<j<<" f[i][j]="<<f[i][j]<<endl;
		}
	}
	cout<<f[n][C]<<endl;
	return 0;
}
//n<=100
//DP的想法,f[i][j][k]表示前i家商店，买了j件家电,k件家具，i-j-k件装饰，需要付出的最小代价
//f[i][j][k]+a[i+1]->f[i+1][j+1][k] 表示第i+1家商店购买的是家电 
//f[i][j][k]+b[i+1]->f[i+1][j][k+1] 表示第i+1家商店购买的是家具 
//f[i][j][k]+c[i+1]->f[i+1][j][k] 表示第i+1家商店购买的是装饰 
//最终答案即为f[n][a][b]
// 50pts

//A
//c=0
//只有家电和家具需要购买
//考虑一开始所有商店我们都买家电，代价为所有a[i]之和
//然后才将其中b家商店的家电改成家具，其中第i家商店如果修改，代价为b[i]-a[i] 
//从贪心的角度，把所有商店的b[i]-a[i]排序，其实选的是b[i]-a[i]最小的b家商店买家具，其他都买家电
//nlogn 排序 


//正解就是把这两个想法叠加在一起
//C
//商店分两类，一类选的是装饰，一类选的非装饰 
//我们先把所有商店按照b[i]-a[i]排序
// 假设我们已经选出了c家商店他们买装饰，那么把他们删除掉以后，一定是最小的b家买家具，最大的a家买家电 
//把所有商店的b[i]-a[i]排序,f[i][j]表示前i家商店，其中有j家商店买了装饰的最小代价，剩下i-j家可能选家电也可能选家具，具体怎么选择是从B部分的角度考虑的 
//假设第i+1家商店选装饰,f[i][j]+c[i+1]->f[i+1][j+1] 
//假设第i+1家商店不选装饰怎么办？
//前面一共有i+1-j家商店不买装饰，要么买家具要么买家电
//如果i+1-j<=b 那么从贪心的角度肯定买家具f[i][j]+b[i+1]->f[i+1][j]
//如果i+1-j>b 那么从贪心的角度肯定买家电f[i][j]+a[i+1]->f[i+1][j] 
//f[n][c]
//O(n^2) 


//B
 //我们先把所有商店按照b[i]-a[i]排序
 //回忆c=0的做法，把所有商店按b[i]-a[i]排序以后一定是前b家选家具，后a家选家电 
 //1 2 3 4 5 6 7 8 9
 //a=3,b=3,c=3
 //在其中选三家装饰 
 //假设已经选出了2,4,7三家商店选装饰,b[i]-a[i]相对顺序不变 
 //意味着1,3,5,6,8,9这六家商店肯定不选装饰，要么选家电要么选家具 
 //一定是前三家选家电，后三家选家具 
