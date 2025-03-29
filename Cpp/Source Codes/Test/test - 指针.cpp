#include<bits/stdc++.h>
#define int long long
using namespace std;
struct node{
	int id,age;
	string name;
};
signed main(){
	int a=10;
	cout<<a<<"\n"<<&a<<"\n"<<*(&a)<<"\n";
	// &: 取地址 *: 解引用
	// *(&a): 取a地址对应的值 
	int *p=&a;
	cout<<p<<" "<<*p<<"\n";
	// 结构体指针
	node b={114514,16,"张博煊"};
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

