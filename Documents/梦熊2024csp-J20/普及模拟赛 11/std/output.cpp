#include<bits/stdc++.h>
#define ll long long
#define db double
#define mp make_pair
#define fi first
#define se second
#define pii pair<int,int>
using namespace std;
int read1(){//ͨ�����ַ����ķ�ʽ�������� ��scanf����,�ȹر�ͬ�������� 
	int sum=0,f=1;char st=getchar();//�ȶ���һ���ַ� 
	//һ���Ǹ��ţ�һ�������� 
	if(st=='-')f=-1,st=getchar();//����Ƿ����ٶ�һλ���������һ��һ�������� 
	while('0'<=st&&st<='9'){//���������֣�����whileѭ�� 
		sum=sum*10+st-'0';
		st=getchar();
	}
	return sum*f;
}
int read2(){
	int sum=0,f=1;char st=getchar();
	//����ĵ�һ���ַ������ֿ��ܣ����ţ����֣���ĸ 
	if('a'<=st&&st<='z'){//�������ĸ��һ���ǵ�һ������ 
		st=getchar();
		return 1e9;
	}
	if(st=='-')f=-1,st=getchar();//����Ǹ��ţ��ڶ���һ���ַ���һ�������� 
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
			int l=d,r=e;//�ڶ�������ѭ�������Ѿ�ȷ���� 
			if(l==1e9)l=i;
			if(r==1e9)r=i;
			ll cnt=(r-l+f-1)/f;
			if(cnt>0)ans+=(l+l+(cnt-1)*f)*cnt/2;//�Ȳ�������� 
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
			//�Ȳ�������� 
		}
	}
	cout<<ans<<endl;
	return 0;
}
//���� ,�ᳬʱ, ���½�forѭ������
//ö�ٵ�һ��ѭ�����ڶ���ѭ����һ���Ȳ����� 
//����->�ַ�������
//����Ż� 
//����һ�����ֺ�һ����ĸ,��ô��׼�İ����ָ�ȡ���� 
