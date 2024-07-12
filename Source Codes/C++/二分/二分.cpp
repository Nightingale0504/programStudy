#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int flag=0; 
	int a[10]={99,36,82,71,60,39,10,8,76,1},low=0,mid=0,high=9,x;
	cin>>x;
	sort(a,a+10);
	while (low<=high){
		mid=(low+high)/2;
		if (x==a[mid]){
			flag=1;
			cout<<mid+1;
			break;
		}else if (x>a[mid]){
			low=mid+1;
		}else{
			high=mid-1;
		}
	}
	if (flag==0){
		cout<<-1;
	}
	return 0;
}


