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
// part: part:solution2 define struct
struct student {
	int sid;
	float s;
};
int main(){
// part:solution 1
	cout<<"Solution 1"<<endl;
	// part:define variable
	int n,k;
	// part:enter n and k
	cin>>n>>k;
	// part:define arraies sid and s
	int sid[n];
	float s[n];
	// part:enter sid and s
	for (int i=0;i<n;i++){
		cin>>sid[i];
		cin>>s[i];
	} 
	// part:sort k and s
	for (int i=0;i<n;i++){
		for (int j;j<n;j++){
			if (s[j]<s[j+1]){
				swap(s[j],s[j+1]);
				swap(sid[j],sid[j+1]);
			}
		}
	}
	// part:output result
	cout<<endl<<sid[k-1]<<" "<<s[k-1]<<endl;
// part:solution 2
	cout<<"Solution 2"<<endl;
	// part:define variable
	int n2,k2;
	// part:enter n and k
	cin>>n2>>k2;
	// part:define struct 'student' variable
	student stu[n2+1];
	// part:enter stu
	for (int i=0;i<n2;i++){
		cin>>stu[i].sid>>stu[i].s;
	}
	// part:sort stu
	for (int i=0;i<n2;i++){
		for (int j=0;j<n2-i-1;j++){
			if (stu[j].s<stu[j+1].s){
				swap(stu[j],stu[j+1]);
			}
		}
	}
	// part:output result
	cout<<endl<<stu[k2-1].sid<<" "<<stu[k2-1].s; 
}

