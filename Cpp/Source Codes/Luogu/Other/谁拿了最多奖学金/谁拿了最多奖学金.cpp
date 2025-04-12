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
using namespace std;
// part:define struct
struct student{
	string name;
	int averpoint;
	int reviewpoint;
	char Isleader;
	char Isweststu;
	int nop;
};
struct award{
	string name;
	int awards;
};
int main(){
	// part:define variable
	int n,awards[2];
	string mas;
	// part:enter n
	cin>>n;
	// part:define struct 'student' variable and award
	student stu[n+1];
	award a[n+1],b[n+1];
	// part:clear a
	for (int i=0;i<n;i++){
		a[i].awards=0;
	}
	// part:enter stu
	for (int i=0;i<n;i++){
		cin>>stu[i].name;
		cin>>stu[i].averpoint;
		cin>>stu[i].reviewpoint;
		cin>>stu[i].Isleader;
		cin>>stu[i].Isweststu;
		cin>>stu[i].nop;
	}
	// part:calculation total awards
	for (int i=0;i<n;i++){
		a[i].name=stu[i].name;
		if (stu[i].averpoint>80&&stu[i].nop>=1){ // Ժʿ��ѧ��
			a[i].awards+=8000;
		}
		if (stu[i].averpoint>85&&stu[i].reviewpoint>80){ // ���Ľ�ѧ��
			a[i].awards+=4000;
		}
		if (stu[i].averpoint>90){ // �ɼ����㽱
			a[i].awards+=2000;
		}
		if (stu[i].averpoint>85&&stu[i].Isweststu=='Y'){ //������ѧ��
			a[i].awards+=1000;
		}
		if (stu[i].reviewpoint>80&&stu[i].Isleader=='Y'){ // �༶���׽�
			a[i].awards+=850;
		}
	}
	// part:find maximum award student
	for (int i=0;i<n;i++){
		b[i].name=a[i].name;
		b[i].awards=a[i].awards;
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n-i-1;j++){
			if (b[j].awards<b[j+1].awards){
				swap(b[j],b[j+1]);
			}
		}
	}
	mas=b[0].name;
	awards[0]=b[0].awards;
	awards[1]=0;
	for (int i=0;i<n;i++){
		awards[1]+=b[i].awards;
	}
	// part:output result
	cout<<mas<<endl<<awards[0]<<endl<<awards[1];
	return 0;
}

