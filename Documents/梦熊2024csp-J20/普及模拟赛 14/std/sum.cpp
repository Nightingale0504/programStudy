#include<bits/stdc++.h>
using namespace std;
map<string,int>F; //�±������һ������
//#define ll long long
//#define db double
//#define mp make_pair
//#define fi first
//#define se second
//#define pii pair<int,int>
//using namespace std;
//int read(){
//	int sum=0,f=1;char st=getchar();
//	while(st<'0'||st>'9'){
//		if(st=='-')f=-1;
//		st=getchar();
//	}
//	while('0'<=st&&st<='9'){
//		sum=(sum<<3)+(sum<<1)+st-'0';
//		st=getchar();
//	}
//	return sum*f;
//}
//const int maxn=1000010;
//int n;
//ll m,a[maxn],s[maxn];
int main(){
	F["abc"]=2;
	F["cde"]=2;
	F["cd"]++;
	cout<<F["cd"]<<","<<F["abc"]<<","<<F["cde"]<<endl;
//	freopen("sum.in","r",stdin);
//	freopen("sum.out","w",stdout);
//	cin>>n>>m;
//	for(int i=1;i<=n;++i){
//		a[i]=read();
//		s[i]=s[i-1]+a[i];
//	}
//	int anss=0;
//	for(int i=1;i<=n;++i){
//		int mi=0,ma=i-1,mid,ans=0;
//		while(mi<=ma){
//			mid=(mi+ma)>>1;
//			if(s[i]-s[mid]>=m)mi=mid+1,ans=mid;
//			else ma=mid-1;
//		}
//		if(s[i]-s[ans]==m)++anss;
//	}
//	cout<<anss<<endl;
	return 0;
}
/*
�������-> ǰ׺�� sum
sum[r]-sum[l-1]==m
O(n^2)
STL map x;
ö��r
�ж��ٸ�sum[l-1]����ֵǡ��Ϊsum[r]-m
for(int i=1;i<=n;i++) x[sum[i-1]]++;
for(int i=1;i<=n;i++) ans+=x[sum[i]-m];  
unordered_map map
map��ʵ�ֵĲ������� 
unordered_map 

˫ָ���˼��
���ֵ��뷨 
�ҵ���һ��sum[r]=sum[l-1]+m 
sum[l-1]=sum[r]-m��һ��λ��
sum������һ��������һ������ 






*/



