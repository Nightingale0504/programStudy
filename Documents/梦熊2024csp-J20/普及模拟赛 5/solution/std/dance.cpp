#include <cstdio>
#include <iostream>
using namespace std;
int main() {
//	freopen("dance.in", "r", stdin);
//	freopen("dance.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    if(n%2==1) cout<<(1 + (n + 1) / 2) * (n + 1)<<endl;
    else cout<<(n / 2 + 1) * (n / 2 + 1)<<endl;
    return 0;
}
//������һ���Ƕ�ȥ����
//f[i][j][k][0/1]��ʾĿǰ�ߵ���(i,j)����㣬һ������k����������һ��������(0)��������(1)
//f[i][j][k][0]->f[i+1][j][k+1][1] ,f[i-1][j][k+1][1]
//f[i][j][k][1]->f[i][j+1][k+1][1] ,f[i][j-1][k+1][1]
//ֱ��д��һ����ͨ�����Ȱ����д��ܳ��������ڱ��أ�Ȼ��һ�������
//Ӧ�Լ���
//n��ż��
//ÿһ�������������£�ż����������
//�����������ң�ż���������� 
//����һ��(��1,��1)һ���Խ��� 
//(n/2+1)*(n/2+1) 
//n������
//(1+(n+1)/2)*(n+1)
