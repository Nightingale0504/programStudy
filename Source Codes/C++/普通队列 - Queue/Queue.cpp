#include<iostream>
#include<cstdio>
#include<queue>
#include<algorithm>
using namespace std;
queue<int>que;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("nightingale.in","r",stdin);
		freopen("nightingale.out","w",stdout);
	#endif
	int x=10;
	que.push(x); //�������� 
	que.pop(); //ɾ������Ԫ�� 
	int n=que.front(); //��ѯ����Ԫ�� 
	int m=que.back(); //��ѯ��βԪ�� 
	int k=que.size(); //��ѯ���г��� 
	bool l=que.empty(); //��ѯ����״̬��Ϊ��/�ǿգ� 
	return 0;
}

