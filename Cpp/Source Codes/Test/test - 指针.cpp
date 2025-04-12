#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<stack>
#include<queue>
#include<climits>
#include<cmath>
#define int long long
using namespace std;
struct node{
	int id,age;
	string name;
};
signed main(){
	int a=10;
	cout<<a<<"\n"<<&a<<"\n"<<*(&a)<<"\n";
	// &: ȡ��ַ *: ������
	// *(&a): ȡa��ַ��Ӧ��ֵ 
	int *p=&a;
	cout<<p<<" "<<*p<<"\n";
	// �ṹ��ָ��
	node b={114514,16,"�Ų���"};
	node *q=&b;
	cout<<b.age<<" "<<q->age<<" "; 
	int c=1145141919810;
	stringstream ss;
	string s;
	ss<<c;
	ss>>s;
	cout<<s;
	return 0;
}

