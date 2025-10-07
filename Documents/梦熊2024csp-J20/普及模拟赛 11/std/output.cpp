#include<bits/stdc++.h>
#define ll long long
#define db double
#define mp make_pair
#define fi first
#define se second
#define pii pair<int,int>
using namespace std;
int read1(){//通过读字符串的方式读入数字 比scanf更快,比关闭同步流更快 
	int sum=0,f=1;char st=getchar();//先读入一个字符 
	//一种是负号，一种是数字 
	if(st=='-')f=-1,st=getchar();//如果是符号再读一位，读入的下一个一定是数字 
	while('0'<=st&&st<='9'){//读到非数字，跳出while循环 
		sum=sum*10+st-'0';
		st=getchar();
	}
	return sum*f;
}
int read2(){
	int sum=0,f=1;char st=getchar();
	//读入的第一个字符有三种可能，负号，数字，字母 
	if('a'<=st&&st<='z'){//如果是字母，一定是第一个变量 
		st=getchar();
		return 1e9;
	}
	if(st=='-')f=-1,st=getchar();//如果是负号，在读入一个字符，一定是数字 
	while('0'<=st&&st<='9'){
		sum=(sum<<3)+(sum<<1)+st-'0';
		st=getchar();
	}
	return sum*f;
}
int main(){
//	freopen("output.in","r",stdin);
//	freopen("output.out","w",stdout);
	int ch=getchar();
	while(ch!='(')ch=getchar();
	int a=read1();
	int b=read1();
	int c=read1();
	ch=getchar();
	while(ch!='(')ch=getchar();
	int d=read2();
	int e=read2();
	int f=read2();
	ll ans=0;
	if(c>0){
		for(int i=a;i<b;i+=c){
			int l=d,r=e;//第二层三个循环变量已经确定了 
			if(l==1e9)l=i;
			if(r==1e9)r=i;
			ll cnt=(r-l+f-1)/f;
			if(cnt>0)ans+=(l+l+(cnt-1)*f)*cnt/2;//等差数列求和 
		}
		//1  8  3
		//1 ,4 , 7
	}
	else{
		for(int i=a;i>b;i+=c){
			int l=d,r=e;
			if(l==1e9)l=i;
			if(r==1e9)r=i;
			ll cnt=(r-l+f-1)/f;
			if(cnt>0)ans+=(l+l+(cnt-1)*f)*cnt/2;
			//等差数列求和 
		}
	}
	cout<<ans<<endl;
	return 0;
}
//输入 ,会超时, 上下界for循环问题
//枚举第一层循环，第二层循环是一个等差数列 
//输入->字符串处理
//快读优化 
//对于一堆数字和一堆字母,怎么精准的把数字给取出来 
