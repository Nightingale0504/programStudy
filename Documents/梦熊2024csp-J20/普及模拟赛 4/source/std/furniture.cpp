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
bool paix(qqq s1,qqq s2){//��b-a��Ȩֵ������ 
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
	//������ 
	memset(f,0x7f,sizeof(f));
	f[0][0]=0;//f[i][j]��ʾǰi���ź������̵꣬����ѡj��װ�ε���С���� 
	for(int i=1;i<=n;++i){
		for(int j=0;j<=min(i,C);++j){
			//��һ�������ѡ��װ�� 
			if(i-j<=B)f[i][j]=f[i-1][j]+a[i].b;
			else f[i][j]=f[i-1][j]+a[i].a;
			//�ڶ������ѡ�� 
			if(j)f[i][j]=min(f[i][j],f[i-1][j-1]+a[i].c);
			// cout<<"i="<<i<<" j="<<j<<" f[i][j]="<<f[i][j]<<endl;
		}
	}
	cout<<f[n][C]<<endl;
	return 0;
}
//n<=100
//DP���뷨,f[i][j][k]��ʾǰi���̵꣬����j���ҵ�,k���Ҿߣ�i-j-k��װ�Σ���Ҫ��������С����
//f[i][j][k]+a[i+1]->f[i+1][j+1][k] ��ʾ��i+1���̵깺����Ǽҵ� 
//f[i][j][k]+b[i+1]->f[i+1][j][k+1] ��ʾ��i+1���̵깺����ǼҾ� 
//f[i][j][k]+c[i+1]->f[i+1][j][k] ��ʾ��i+1���̵깺�����װ�� 
//���մ𰸼�Ϊf[n][a][b]
// 50pts

//A
//c=0
//ֻ�мҵ�ͼҾ���Ҫ����
//����һ��ʼ�����̵����Ƕ���ҵ磬����Ϊ����a[i]֮��
//Ȼ��Ž�����b���̵�ļҵ�ĳɼҾߣ����е�i���̵�����޸ģ�����Ϊb[i]-a[i] 
//��̰�ĵĽǶȣ��������̵��b[i]-a[i]������ʵѡ����b[i]-a[i]��С��b���̵���Ҿߣ���������ҵ�
//nlogn ���� 


//������ǰ��������뷨������һ��
//C
//�̵�����࣬һ��ѡ����װ�Σ�һ��ѡ�ķ�װ�� 
//�����Ȱ������̵갴��b[i]-a[i]����
// ���������Ѿ�ѡ����c���̵�������װ�Σ���ô������ɾ�����Ժ�һ������С��b����Ҿߣ�����a����ҵ� 
//�������̵��b[i]-a[i]����,f[i][j]��ʾǰi���̵꣬������j���̵�����װ�ε���С���ۣ�ʣ��i-j�ҿ���ѡ�ҵ�Ҳ����ѡ�Ҿߣ�������ôѡ���Ǵ�B���ֵĽǶȿ��ǵ� 
//�����i+1���̵�ѡװ��,f[i][j]+c[i+1]->f[i+1][j+1] 
//�����i+1���̵겻ѡװ����ô�죿
//ǰ��һ����i+1-j���̵겻��װ�Σ�Ҫô��Ҿ�Ҫô��ҵ�
//���i+1-j<=b ��ô��̰�ĵĽǶȿ϶���Ҿ�f[i][j]+b[i+1]->f[i+1][j]
//���i+1-j>b ��ô��̰�ĵĽǶȿ϶���ҵ�f[i][j]+a[i+1]->f[i+1][j] 
//f[n][c]
//O(n^2) 


//B
 //�����Ȱ������̵갴��b[i]-a[i]����
 //����c=0���������������̵갴b[i]-a[i]�����Ժ�һ����ǰb��ѡ�Ҿߣ���a��ѡ�ҵ� 
 //1 2 3 4 5 6 7 8 9
 //a=3,b=3,c=3
 //������ѡ����װ�� 
 //�����Ѿ�ѡ����2,4,7�����̵�ѡװ��,b[i]-a[i]���˳�򲻱� 
 //��ζ��1,3,5,6,8,9�������̵�϶���ѡװ�Σ�Ҫôѡ�ҵ�Ҫôѡ�Ҿ� 
 //һ����ǰ����ѡ�ҵ磬������ѡ�Ҿ� 
