#include <bits/stdc++.h>
using namespace std;
char ans[100005];
char a[100005], b[100005];
int main() {
    freopen("drink.in", "r", stdin);
    freopen("drink.out", "w", stdout);
#define int long long
    int p = 0, q = 0, k = 0, n, j = 0, flag = 0;
    scanf("%s %d", a+1, &q);
    //a+1����������������ֵ�����
	int len=strlen(a+1);
	//��ת���� -> ���и߾��ȶ�Ҫ���� 
	//��λ��ǰ����λ�ں�->��λ�ں󣬵�λ��ǰ 
	q--;
	for(int i=1;i<=len/2;i++) swap(a[i],a[len-i+1]);
	int sum=0;
	for(int i=len;i>=1;i--){
		sum=sum*10+a[i]-'0';
		f[i]=sum/q;
		sum=sum%q;
	}
	//������ǰ����
	int x=len;
	while(f[x]==0) x--;
	for(int i=x;i>=1;i--) cout<<f[i]; 
    
//    q--;
//    n = strlen(a);
//    for (int i = 0; i < n; i++) {
//        p = p * 10 + a[i] - '0';
//        if (p >= q) {
//            k = p / q;
//            ans[j++] = k + '0';
//            p = p % q;
//        } else
//            ans[j++] = '0';
//    }
//    for (int i = 0; i < j; i++) {
//        if (ans[i] != '0')
//            flag = 1;
//        if (flag == 1)
//            printf("%c", ans[i]);
//    }
}
/*
ÿ����k�����ϣ��Ϳ��Ի�һ���µ� 
k-1������ƿ�����Ի�һ���µ����ϣ������µ�����ƿ��������
n/(k-1)
�߾���/int ����ʽ
�����մ�
���и߾��ȵ�ԭ����ģ����ʽ 
�������ֶ���,�ŵ�һ����������,����������f
������һ��ʣ�µ�����Ϊsum
sum*10+f[i] 
�߾���=ģ�� 
*/


