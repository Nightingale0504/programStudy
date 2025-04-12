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
struct student {
	string sn;
	int s;
};
int main(){
	// part:define variable
	int n;
	// part:enter n
	cin>>n;
	// part:define struct 'student' variable
	student stu[n+1];
	// part:enter stu
	for (int i=0;i<n;i++){
		cin>>stu[i].sn>>stu[i].s;
	}
	// part:sort stu
	for (int i=0;i<n;i++){
		for (int j=0;j<n-i-1;j++){
			if (stu[j].s<stu[j+1].s){
				swap(stu[j],stu[j+1]);
			}
		}
	}
	cout<<endl;
	// part:output result
	for (int i=0;i<n;i++){
		cout<<stu[i].sn<<" "<<stu[i].s;
		if (i!=n-1){
			cout<<endl;
		}
	}
}

