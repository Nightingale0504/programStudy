#include<iostream>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
#define int long long
int xl,xu,yl,yu;
signed main(){
	cin>>xl>>xu>>yl>>yu;
	int ans1=xl*yl,ans2=xl*yu,ans3=xu*yl,ans4=xu*yu;
	if(ans1>INT_MAX || ans1<INT_MIN ||ans2>INT_MAX || ans2<INT_MIN ||ans3>INT_MAX || ans3<INT_MIN || ans4>INT_MAX || ans4<INT_MIN){
		cout<<"long long int";
	}else{
		cout<<"int";
	}
	return 0;
}

